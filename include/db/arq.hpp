#pragma once

#include <libpq-fe.h>

class Archivable{
    
    public:
    virtual bool insert(PGconn*) = 0;
    
};


