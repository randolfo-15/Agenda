#include "../hrd//Contact.hpp"
#include "gtest/gtest.h"
#include <iostream>

TEST(Contacts,sample_test){
    Contact 
        cnt,
        cnt1("Pedro"),
        cnt2("Ana Banana Abacate","(31) 91111-1111");

    cnt.first_name("Randolfo");
    cnt.last_name("A Gonçalves");
    cnt.e_mail("ragnifico@yahoo.com.br");
    cnt.telephone("(31) 98105-9465");

    // Rotina simples:
    
    EXPECT_EQ(cnt.e_mail(),"ragnifico@yahoo.com.br" );
    EXPECT_EQ(cnt.telephone(),"(31) 98105-9465" );

    // Build Contact(nome):
    EXPECT_EQ(cnt1.first_name(),"Pedro" );

    // Build Contact(nome,tel):
    EXPECT_EQ(cnt2.first_name(),"Ana" );
    EXPECT_EQ(cnt2.telephone(),"(31) 91111-1111" );

}

TEST(Contact,first_name){ EXPECT_EQ(Contact("Pedro Gomes").first_name(),"Pedro"); }

TEST(Contact,last_name){ EXPECT_EQ(Contact("Pedro Gomes").last_name(),"Gomes"); }
