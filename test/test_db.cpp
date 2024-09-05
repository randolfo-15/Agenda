/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : test_db.cpp
 * \since  : 1.0
 */

#include <datas/Notes.hpp>
#include <db/Bank.hpp>
#include <gtest/gtest.h>

// TEST(Bank,connect){ EXPECT_EQ(Bank().connect(), true); }

TEST(Bank,insert){ 
    Bank bank;
    Notes note;
    note.tag_add("Aaa Bbb Ccc");
    note.content("Letras aaaaaaa bbbbbbb ccccccc.");

    bank.add(&note);
}

