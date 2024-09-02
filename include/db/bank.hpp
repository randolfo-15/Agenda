#pragma once 

/*! Bank
 * ======
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : bank.hpp
 * \since  : 1.0
*/

#include <libpq-fe.h>
#include "sql.hpp"
#include "arq.hpp"

class Bank{
    PGconn* conn = nullptr;
    
    

    public:
    /*! Conectar 
        ========
        Conectar cliente a um banco de dados qualquer
        ________________________________________
        \param  std::string (String de conexão)
        \return bool        (status)
    
    */
        bool connect(std::string=db::STR_CONN);
    
    /*! Desconectar
        ===========
        Encerrar conexão
        _________________________________________
        \return void
    
    */
        void disconnect();

    /*!  Log
        =====
        Saída de log relacionada ao ultimo erro de execução.
        ___________________________________________
        \return std::string (msg de erro)
    */
        std::string log();

    /*! Query
       =======

    */
        bool add(Archivable*);
        bool up(Archivable*);
        bool find(Archivable*);
        bool erase(Archivable*);
     
};
