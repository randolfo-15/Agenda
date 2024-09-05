#pragma once

#include <libpq-fe.h>

class Bank;

class Achievable{
    
    friend Bank;

    virtual bool insert(PGconn*);

    protected:
        bool exec(PGconn*,const char* query,int n,const char** pvalue);
    
};


