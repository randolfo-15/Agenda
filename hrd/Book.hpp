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
    public:
    void add(Note);    //> Adicione uma nota
    void edit(Note);   //> Editar nota
    void remove(Note); //> Remova uma nota

    void get(int page); //> Obter uma nota
};
