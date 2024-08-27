/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 25-08-24
 * \file   : Notebook.cpp
 * \since  : 1.0
 */

#include "../hrd/Book.hpp"
#include <algorithm>

using std::for_each;

using List=std::initializer_list<Notes>;
using vec=std::vector<Notes>;

void Book::add(Note note){ book.push_back(note); }

void Book::add(List notes){
    for_each(notes.begin(), notes.end(), [this](Notes note){ add(note); } );
}

void Book::edit(Note note){
    for_each(book.begin(), book.end(),[note](Notes& old){ if(old.page()==note.page())old=note; });
}

void Book::remove(Note note){
    for_each(book.begin(),book.end(),[this,note](Notes del){ if(del.page()==note.page()) book.erase(note); });
}

void Book::remove(List notes){
    for_each(notes.begin(), notes.end(),[this](Notes note){ remove(note); });
}
