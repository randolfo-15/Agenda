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

class Notes{
    std::string text = "";
    std::vector<std::string> tag;
    int id = 0;

    public:
        // Build
        // =====
        Notes();
        Notes(std::string reminder); 
        Notes(std::string reminder,std::initializer_list<std::string> tags);

        // Setting
        // =======
        void note(std::string);
        void tags(std::initializer_list<std::string>);
        void page(int);

        // Getting
        // =======
        std::string note();
        std::initializer_list<std::string> tags();
        int page();

};

