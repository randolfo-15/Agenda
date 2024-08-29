/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 26-08-24
 * \file   : test_contact.hpp
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

