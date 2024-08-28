#pragma once
/*!
 *  Notas
 * =======
 * \author : Randolfo A Goncalves
 * \date   : 24-08-25
 * \file   : Notas.hpp
 * \since  : 1.0
 */

#include <initializer_list>
#include <string>
#include <vector>

class Book;
class Notes{
    friend Book;

    std::string text = "";
    std::vector<std::string> tag;
    static int id;
    int number;

    public:
        // Build
        // =====
        Notes();
        Notes(std::string reminder); 
        Notes(std::string reminder,std::initializer_list<std::string> tags);

        // Setting
        // =======
        void note(std::string);
    
        // Getting
        // =======
        std::string note();
        
        // Tags tools
        // =====
        void tag_add(std::string);
        int  tag_exist(std::string);
        void tag_erase(std::string);

    private:
        int page();
};

