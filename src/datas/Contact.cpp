/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 24-08-24
 * \file   : Contact.cpp
 * \since  : 1.0
 */

#include <datas/Contact.hpp>


using str=std::string;

// Build
// =====
Contact::Contact(){}

Contact::Contact(str name):nm(name){}

Contact::Contact(str name,str number):
    phone(number),
    nm(name)
{}

// Setting
// =======
void Contact::name(str name){ nm = name; }

void Contact::telephone(str number){ phone=number; } 

void Contact::e_mail(str name){ email=name; }

// Getting
// =======
str Contact::name(){ return nm; }

str Contact::first_name(){  return nm.substr(0,nm.find(" ")); } 

str Contact::last_name(){ 
    std::size_t i=nm.find(" ");
    if(i==str::npos) return "";
    else if(nm.at(0)==' ') return "";
    return nm.substr(i+1); 
}  

str Contact::telephone(){ return phone; }  
str Contact::e_mail(){ return email; }
Book Contact::notes(){ return book; }
