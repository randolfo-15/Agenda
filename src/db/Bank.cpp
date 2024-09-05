#include <db/Bank.hpp>

using str=std::string;
using namespace db;
using Arq=Achievable;


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

Bank::Bank(){}
Bank::~Bank(){ disconnect(); }


bool Bank::add(Arq* arq){ return arq->insert(conn); } 
bool Bank::up(Arq* arq){ return false; } 
bool Bank::find(Arq* arq){ return  false; } 
bool Bank::erase(Arq* arq){ return false; } 

