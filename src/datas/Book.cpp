/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 25-08-24
 * \file   : Notebook.cpp
 * \since  : 1.0
 */

#include <datas/Book.hpp>

void Book::add(Note note){ book.push_back(note); }

void Book::edit(Note note){
    int i = 0;
    if( (i=exist(note.page()))>=0) book[i]=note;
}

void Book::erase(Note note){
    int i = 0;
    if( (i=exist(note.page()))>=0) book.erase(book.begin()+i);
}

int Book::exist(int number){
    int size = book.size();
    for(int i=0;i<size;i++) if(book[i].page()==number) return i;
    
    return -1;
}