#pragma once
/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 25-08-24
 * \file   : Notebook.hpp
 * \since  : 1.0
 */

#include "Notes.hpp"

using Note=Notes;

class Book{

    std::vector<Notes> book;

    public:
        void add(Note);       //> Adicione uma nota
    
        void edit(int,Note);  //> Editar nota
    
        void erase(int);      //> Remova uma nota

        int size();           //> Nº de notas
    
        Note operator[](int);
};

