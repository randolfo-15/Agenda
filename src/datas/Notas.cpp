#include <datas/Notes.hpp>

using str=std::string;
using List=std::initializer_list<str>;

int Notes::id = 0;

Notes::Notes():Notes("",{}){}

Notes::Notes(str text):Notes(text,{}){}

Notes::Notes(str reminder,List tags):
    text(reminder),
    tag(tags),
    number(id++)
{}

// Setting
// =======
void Notes::note(str msg){ text=msg; }


// Getting
// =======
str Notes::note(){ return text; }

// Tools
// =====
int Notes::tag_exist(str flag){
    int size = tag.size();
    for(int i=0;i<size;i++)  if(tag[i]==flag) return i;
    return -1; 
}
void Notes::tag_add(str flag){ tag.push_back(flag); }

void Notes::tag_erase(str flag){ 
    int i=0;
    if(( i= tag_exist(flag)) >=0) tag.erase(tag.begin()+i); 
}

int Notes::page(){ return number;}
