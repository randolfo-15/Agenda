/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 26-08-24
 * \file   : test_datas.cpp
 * \since  : 1.0
 */

#include <datas/Contact.hpp>
#include <gtest/gtest.h>


TEST(Contacts,email){
    Contact  cnt;
    cnt.e_mail("rag@gmail.com");
    EXPECT_EQ(cnt.e_mail(), "rag@gmail.com");    
}

TEST(Contacts,telephone){ EXPECT_EQ(Contact("","(31) 91111-1111").telephone(), "(31) 91111-1111"); }

TEST(Contacts,first_name){ EXPECT_EQ(Contact("Pedro Gomes").first_name(),"Pedro"); }

TEST(Contacts,no_surname){ EXPECT_EQ(Contact("Pedro").last_name(),""); }

TEST(Contacts,last_name){ EXPECT_EQ(Contact("Pedro Gomes").last_name(),"Gomes"); }

TEST(Contacts,full_name){ EXPECT_EQ(Contact("Pedro Gomes").name(),"Pedro Gomes"); }

TEST(Notes,compare){
    Notes note("test");
    EXPECT_EQ(note.content(), "test");
}

TEST(Notes,edit){
    Notes note("test_01");
    note.content("test_02");
    EXPECT_EQ(note.content(), "test_02");
}

TEST(Notes,find){
    Notes note({"Aa","Bb","Cc"});
    EXPECT_GE(note.tag_exist("Bb"), 0);
    EXPECT_GE(note.tag_exist("Bb"), 1);
    EXPECT_EQ(note.tag_exist("Xx"), -1);
    note.tag_erase("Bb");
    EXPECT_EQ(note.tag_exist("Bb"), -1);
    note.tag_add("Xx");

    EXPECT_GE(note.tag_exist("Xx"), 0);
}


TEST(Book,size){
    Book book;
    book.add(Note());
    book.add(Note());
    book.add(Note());

    EXPECT_EQ(book.size(),3);
}

TEST(Book,erase_size){
    Book book;
    book.add(Note());
    book.add(Note());
    book.add(Note());
    
    book.erase(1);
    
    EXPECT_EQ(book.size(),2);
}

TEST(Book,edit){
    Notes note("test");
    Book book;

    book.add(Notes());
    book.edit(0, note);

    EXPECT_EQ(book[0].content(), "test");
}
