/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 25-08-24
 * \file   : Notebook.cpp
 * \since  : 1.0
 */

#include <datas/Book.hpp>

void Book::add(Note note){ book.push_back(note); }

void Book::edit(int i,Note note){ book[i]=note; }

void Book::erase(int i){ book.erase(book.begin()+i); }

int Book::size(){ return book.size(); }

Note Book::operator[](int i){ return book[i]; }
