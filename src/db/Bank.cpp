#include "Arq.hpp"
#include <db/Bank.hpp>

using str=std::string;
using namespace db;
using Ach=Achievable;


bool Bank::connect(str str_conn){
    if(conn!=nullptr) disconnect();
    conn = PQconnectdb(str_conn.c_str());
    return (PQstatus(conn)==CONNECTION_OK);   
}

void Bank::disconnect(){
    PQfinish(conn);
    conn=nullptr;
}

str Bank::log(){
    return PQerrorMessage(conn);
}

Bank::Bank() { connect();    }
Bank::Bank(str str_conn){ connect(str_conn);}

Bank::~Bank(){ disconnect(); }



bool Bank::add(Ach* ach){ return ach->insert(conn); } 

bool Bank::up(Ach* ach){ return false; } 

bool Bank::find(str col, str value ,Ach* ach){ return ach->select(conn,col,value); } 

bool Bank::erase(str tb,str col,str value){  return Ach::remove(conn,"DELETE FROM "+tb+" WHERE "+col+" = '"+value+"';");} 

