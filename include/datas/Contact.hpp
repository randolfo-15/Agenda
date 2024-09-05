#pragma once
/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 24-08-24
 * \file   : Contact.hpp
 * \since  : 1.0
 */

#include "Book.hpp"


class Contact{
    // Fields
    // ======
    std::string 
        nm    = "", //> Nome
        phone = "", //> Telefone
        email = ""; //> E-mail
        Book book;  //> Bloco de notas
    int id = -1;

    public:
        // Build
        // =====
        Contact();     
        Contact(std::string);                           
        Contact(std::string name, std::string phone);  
  
        // Setting
        // =======
        void name(std::string);
        void telephone(std::string); 
        void e_mail(std::string);   
        void key(int);

        // Getting
        // =======
        std::string name();
        std::string first_name(); 
        std::string last_name();  
        std::string telephone();  
        std::string e_mail();
        Book notes();
        int key();

    // Achievable:
    
    
};
