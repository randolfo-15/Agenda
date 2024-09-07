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



bool Bank::add(Ach* Ach){ return Ach->insert(conn); } 

bool Bank::up(Ach* Ach){ return false; } 

bool Bank::find(Ach* Ach){ return  false; } 

bool Bank::erase(str tb,str co,str value){  return Ach::remove(conn,"DELETE FROM "+tb+" WHERE "+co+" = '"+value+"';");} 

