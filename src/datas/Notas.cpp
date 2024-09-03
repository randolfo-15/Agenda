#include "db/sql.hpp"
#include <charconv>
#include <datas/Notes.hpp>
#include <libpq-fe.h>
#include <string>


using str=std::string;
using List=std::initializer_list<str>;


Notes::Notes():Notes("",{}){}

Notes::Notes(List tags):Notes("",tags){}

Notes::Notes(str text):Notes(text,{}){}

Notes::Notes(str reminder,List tags):
    text(reminder),
    tag(tags)
{}

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

bool Notes::insert(PGconn* conn){
    str tags = "";
    for (auto tg:tag) tags+=tg+" ";

    const char *param[]{
        text.c_str(),
        tags.c_str(),
        "0"  
    };

    PGresult* res = exec(conn,db::INSERT_NOTE.c_str(),3,param);
    bool status = (PQresultStatus(res) == PGRES_COMMAND_OK);
    PQclear(res);
    return status;
    
}