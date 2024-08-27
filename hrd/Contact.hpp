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
        fname = "", //> Primeiro nome
        lname = "", //> Sobrenome
        phone = "", //> Telefone
        email = ""; //> E-mail
        Book book;  //> Bloco de notas

    public:
        // Build
        // =====
        Contact();                                
        Contact(std::string full_name, std::string phone);  
  
        // Setting
        // =======
        void first_name(std::string);  
        void last_name(std::string);  
        void telephone(std::string); 
        void e_mail(std::string);   
         
        // Getting
        // =======
        std::string first_name(); 
        std::string last_name();  
        std::string telephone();  
        std::string e_mail();
        Book notes();
   
    private:
        // Tools
        // =====
        std::string my_first_name(std::string);
        std::string my_last_name(std::string);
};
