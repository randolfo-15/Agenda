#pragma once
/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 24-08-24
 * \file   : Contact.hpp
 * \since  : 1.0
 */

#include "Book.hpp" 
#include <string>

class Contact{
    // Fields
    // ======
    std::string 
        nm    = "", //> Nome
        phone = "", //> Telefone
        email = ""; //> E-mail
        Book book;  //> Bloco de notas

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
         
        // Getting
        // =======
        std::string name();
        std::string first_name(); 
        std::string last_name();  
        std::string telephone();  
        std::string e_mail();
        Book notes();
};
