#pragma once

#include <libpq-fe.h>
#include <string>

class Bank;

class Achievable{
    
    friend Bank;

    virtual bool insert(PGconn*,bool=false);
    static bool remove(PGconn*,std::string);
    virtual bool select(PGconn*,std::string,std::string);

    protected:
        PGresult* exec(bool& status,PGconn*,const char* query,int n,const char** pvalue);
        
        static PGresult* exec(PGconn*,std::string);
    
};


