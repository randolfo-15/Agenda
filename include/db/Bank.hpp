#pragma once 

/*! Bank
 * ======
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : bank.hpp
 * \since  : 1.0
*/

#include "Arq.hpp"
#include "Sql.hpp"
#include <string>

class Bank{
    PGconn* conn = nullptr;
    
    public:
        Bank();
        Bank(std::string);
        ~Bank();

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
        bool add(Achievable*);
        bool up(Achievable*);
        bool find(std::string column,std::string value,Achievable*);
        bool erase(std::string table,std::string column,std::string value);
     
};
