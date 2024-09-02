#include <db/bank.hpp>
#include <libpq-fe.h>

using str=std::string;

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

