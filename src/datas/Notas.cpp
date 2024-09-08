#include "Sql.hpp"
#include <datas/Notes.hpp>
#include <libpq-fe.h>
#include <sstream>


using str=std::string;
using List=std::initializer_list<str>;


Notes::Notes():Notes("",{}){}

Notes::Notes(List tags):Notes("",tags){}

Notes::Notes(str text):Notes(text,{}){}

Notes::Notes(str reminder,List tags):text(reminder),tag(tags){}

// Setting
// =======
void Notes::content(str msg){ text=msg; }

// Getting
// =======
str Notes::content(){ return text; }

// Tools
// =====
int Notes::tag_exist(str flag){
    int size = tag.size();
    for(int i=0;i<size;i++)  if(tag[i]==flag) return i;
    return -1; 
}

void Notes::tag_add(str flag){ tag.push_back(flag); }

bool Notes::tag_erase(str flag){ 
    int i = 0;
    if(( i= tag_exist(flag)) >=0) tag.erase(tag.begin()+i); 
    
    return (i>=0);
}


bool Notes::insert(PGconn* conn,bool status){
    str tags = "";
    int i=0,size= tag.size();
    while(i<size){
        tags+=tag[i];
        if((i+1)<size) tags+=" ";
        ++i;
    }

    const char *param[]{
        text.c_str(),
        tags.c_str(),
        "2"  
    };

    PGresult* res=exec(status,conn,db::INSERT_NOTE.c_str(),3,param);
    PQclear(res);
    return status;
}

bool Notes::select(PGconn* conn,str col, str value){
    
    PGresult* res =exec(conn,"SELECT * FROM "+db::TB_NOTES+" WHERE "+col+" = '"+value+"';");
    if((PQresultStatus(res) != PGRES_TUPLES_OK)) return false;
    text = PQgetvalue(res, 0, 1);
    std::stringstream inf ( PQgetvalue(res, 0, 2));
    owner = std::stoi(PQgetvalue(res, 0, 3));
    
    str tg="";
    while(inf>>tg) tag.push_back(tg);

    return true;
}

