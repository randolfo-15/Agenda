/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : test_db.cpp
 * \since  : 1.0
 */

#include "Sql.hpp"
#include <datas/Notes.hpp>
#include <db/Bank.hpp>
#include <gtest/gtest.h>

const std::string 
    tag = "Aaaxx1@",
    content = "Abacate_formiga";



TEST(Bank,connect){ EXPECT_EQ(Bank().connect(), true); }

TEST(Bank_Notes,insert){ 
    Bank bank;
    Notes note;
    note.tag_add(tag);
    note.content(content);
    

    EXPECT_EQ(bank.add(&note), true);
}


TEST(Bank_Notes,remove){
    Bank bank;
    EXPECT_EQ(bank.erase(db::TB_NOTES,db::CO_NOTES_TAG,tag),true);
}


TEST(Bank_Notes,select){
    Bank bank;
    Notes note;
    bank.find(db::CO_NOTES_TAG,"Compras",&note);
    EXPECT_GE(note.tag_exist("Compras"), 0);
    
}