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

    int number = 0;

    std::vector<Notes> book;

    public:
        void add(Note);    //> Adicione uma nota
    
        void edit(Note);   //> Editar nota
    
        void erase(Note); //> Remova uma nota
    
    private:
        int exist(int page); //> Checa se a mota existe, e retorna sua posição caso exista, caso contraio -1

};
