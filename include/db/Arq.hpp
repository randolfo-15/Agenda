#pragma once

#include <libpq-fe.h>
#include <string>

class Bank;

class Achievable{
    
    friend Bank;

    virtual bool insert(PGconn*,bool=false);
    static bool remove(PGconn*,std::string);

    protected:
        PGresult* exec(bool& status,PGconn*,const char* query,int n,const char** pvalue);
    
};


