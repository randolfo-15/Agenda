#include <Contact.hpp>
#include <gtest/gtest.h>


TEST(Contacts,sample_test){
    Contact 
        cnt1("Pedro"),
        cnt2("Ana Banana Abacate","(31) 91111-1111");

    // Build Contact(nome):
    EXPECT_EQ(cnt1.first_name(),"Pedro" );
    
    // Build Contact(nome,tel):
    EXPECT_EQ(cnt2.first_name(),"Ana" );
    EXPECT_EQ(cnt2.telephone(),"(31) 91111-1111" );

}

TEST(Contacts,first_name){ EXPECT_EQ(Contact("Pedro Gomes").first_name(),"Pedro"); }

TEST(Contacts,no_surname){ EXPECT_EQ(Contact("Pedro").last_name(),""); }

TEST(Contacts,last_name){ EXPECT_EQ(Contact("Pedro Gomes").last_name(),"Gomes"); }
