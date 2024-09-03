#pragma once

#include <libpq-fe.h>
#include "sql.hpp"

class Bank;
class Achievable{
    
    friend Bank;

    virtual bool insert(PGconn*);

    protected:
        PGresult* exec(PGconn*,const char* query,int n,const char** pvalue);
    
};


