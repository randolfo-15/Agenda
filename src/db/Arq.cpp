#include <db/Arq.hpp>


using Ach=Achievable;
using str=std::string;

bool Ach::insert(PGconn*,bool){ return false;}


bool Ach::remove(PGconn* conn,std::string query){ return (PQresultStatus(exec(conn,query))==PGRES_COMMAND_OK);}

bool Ach::select(PGconn* conn,str col,str value){ return false; }

PGresult* Ach::exec(PGconn* conn,std::string query){
    PGresult* res = PQexec(conn, query.c_str());
    return res;
}


PGresult* Ach::exec(bool& status,PGconn* conn,const char* query,int n,const char** pvalue){
    PGresult*res =  PQexecParams(conn,
        query,            // String da consulta
        n,                // Número de parâmetros
        nullptr,       // Tipos de parâmetros (NULL para texto)
        pvalue,       // Valores dos parâmetros
        nullptr,     // Comprimento dos valores (NULL para strings)
        nullptr,     // Formato dos valores (NULL para texto)
        0);          // Formato do resultado (0 = texto)
    
    status= (PQresultStatus(res)==PGRES_COMMAND_OK);
    return res;
}


