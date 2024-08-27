/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 24-08-24
 * \file   : Contact.cpp
 * \since  : 1.0
 */

#include "../hrd/Contact.hpp"

using str=std::string;

// Build
// =====
Contact::Contact(){}

Contact::Contact(str full_name,str number):
    fname(my_first_name(full_name)),
    lname(my_last_name(full_name)),
    phone(number)
{}

// Setting
// =======
void Contact::first_name(str name){ fname=name; }  
void Contact::last_name(str name){ lname=name; }  
void Contact::telephone(str number){ phone=number; } 
void Contact::e_mail(str name){ email=name; }

// Getting
// =======
str Contact::first_name(){ return fname; } 
str Contact::last_name(){ return lname; }  
str Contact::telephone(){ return phone; }  
str Contact::e_mail(){ return email; }
Book Contact::notes(){ return book; }

// Tools
// =====
str Contact::my_first_name(str name){ return name.substr(0,name.find(" "));}
str Contact::my_last_name(str name){ return name.substr(name.find("")+1); }
