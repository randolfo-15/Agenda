#include <db/Arq.hpp>

using Ach=Achievable;

bool Ach::insert(PGconn*){ return false;}

bool Ach::exec(PGconn* conn,const char* query,int n,const char** pvalue){
      PGresult *res = PQexecParams(conn,
                                 query,            // String da consulta
                                 n,                // Número de parâmetros
                                 nullptr,       // Tipos de parâmetros (NULL para texto)
                                 pvalue,       // Valores dos parâmetros
                                 nullptr,     // Comprimento dos valores (NULL para strings)
                                 nullptr,     // Formato dos valores (NULL para texto)
                                 0);          // Formato do resultado (0 = texto)
    
    return (PQresultStatus(res)==PGRES_COMMAND_OK);
}


