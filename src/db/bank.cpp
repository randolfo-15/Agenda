#include <db/bank.hpp>

using str=std::string;
using namespace db;
using Arc=Archivable;


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

bool Bank::add(Arc* arc){ return arc->insert(conn); } 
bool Bank::up(Arc* arc){ return arc->insert(conn); } 
bool Bank::find(Arc* arc){ return arc->insert(conn); } 
bool Bank::erase(Arc* arc){ return arc->insert(conn); } 

