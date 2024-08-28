/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 24-08-24
 * \file   : Contact.cpp
 * \since  : 1.0
 */

#include <Contact.hpp>


using str=std::string;

// Build
// =====
Contact::Contact(){}

Contact::Contact(str name){ full_name(name); }

Contact::Contact(str name,str number):phone(number){ full_name(name); }

// Setting
// =======
void Contact::full_name(str name){ 
    fname=my_first_name(name);
    lname=my_last_name(name);
}

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

str Contact::my_last_name(str name){ 
    std::size_t i=name.find(" ");
    if(i==str::npos) return "";
    else if(name.at(0)==' ') return "";
    return name.substr(i+1); 
}

