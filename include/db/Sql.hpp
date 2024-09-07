#pragma once

/*! Sql
 * =====
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : sql.hpp
 * \since  : 1.0
 */

 #include <string>

namespace  db {
    static const std::string

        //  Conexão
        // =========
        NAME = "agenda",       
        USER = "agenda",
        PASS = "agenda",
        PORT = "5432",
        HOST = "127.0.0.1",

        STR_CONN = 
        " dbname="+NAME+
        " user="+USER+
        " password="+PASS+
        " hostaddr="+HOST+
        " port="+PORT,

        //  Tabelas
        // ========
        TB_ADDRESS="contact.address",
        TB_CONTACT="contact.contact",
        TB_NOTES="contact.notes",

        // Columns Note
        // ============
        CO_NOTES_TAG="tag",

        // DMLs
        // ====

        INSERT_NOTE="INSERT INTO "+TB_NOTES+" (body,tag,owner) VALUES ($1 , $2 , $3);"
        
        ;

 };
