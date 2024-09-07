#include <db/Arq.hpp>
#include <libpq-fe.h>

using Ach=Achievable;

bool Ach::insert(PGconn*,bool){ return false;}


bool Ach::remove(PGconn* conn,std::string query){
    
    PGresult* res = PQexec(conn, query.c_str());
    return (PQresultStatus(res)==PGRES_COMMAND_OK);
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


