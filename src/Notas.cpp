#include "../hrd/Notes.hpp"
#include <algorithm>
#include <initializer_list>
using str=std::string;
using List=std::initializer_list<str>;
using std::for_each;

Notes::Notes(){}

Notes::Notes(str reminder):
    text(reminder)
{}

Notes::Notes(str reminder,List tags):
    text(reminder),
    tag(tags)
{}

// Setting
// =======
void Notes::note(str msg){ text=msg; }
void Notes::tags(List tg){ tag.assign(tg); }

// Getting
// =======
str Notes::note(){ return text; }
bool Notes::exist_tag(str flag){
    bool exist = false;
    for_each(tag.begin(),tag.end(),
        [exist,flag](str& tg){ if(flag==tg)exist=true; }
    );
    return exist;
}
