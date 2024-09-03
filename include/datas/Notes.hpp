#pragma once
/*!
 *  Notas
 * =======
 * \author : Randolfo A Goncalves
 * \date   : 24-08-25
 * \file   : Notas.hpp
 * \since  : 1.0
 */

#include "db/arq.hpp"
#include <initializer_list>
#include <libpq-fe.h>
#include <string>
#include <vector>

class Notes: public Achievable{

    std::string text = "";
    std::vector<std::string> tag;
    
    int id = 0;
    
    public:
        // Build
        // =====
        Notes();
        Notes(std::string reminder);
        Notes(std::initializer_list<std::string> tags); 
        Notes(std::string reminder,std::initializer_list<std::string> tags);

        // Setting
        // =======
        void content(std::string);
        
        // Getting
        // =======
        std::string content();
        
        // Tags tools
        // ==========

        /*! Adiciona uma nova tag
            =====================
            \param  std::string  (nome)
            \return void
        
        */
        void tag_add(std::string);
        
        /*! Checar se tag existe
            ====================
            Função que retorna um valor positivo caso exista 
            a tag, e negativo, caso não exista. O valor positivo
            corresponde a posição de indexe da tag.
            _______________________________________________________
            \param  std::string (nova tag)
            \return int         (posição)
        
        */ 
        int  tag_exist(std::string);
        
        /*! Remover tag
            ===========
            Caso a tag exista ela sera removida usando como cri
            tério de seleção o nome atribuído a mesma.
            _______________________________________________________
            \param  std::string (nome)
            \return bool        (status)
        
        */
        bool tag_erase(std::string);

        bool insert(PGconn*) override;
};

