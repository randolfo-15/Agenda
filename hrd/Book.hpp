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
    void add(std::initializer_list<Notes>);
    
    void edit(Note);   //> Editar nota
    
    void remove(Note); //> Remova uma nota
    void remove(std::initializer_list<Notes>);

    void get(int page); //> Obter uma nota

};
