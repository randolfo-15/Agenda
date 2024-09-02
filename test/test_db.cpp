/*! Contact
 * =========
 * \author : Randolfo A Goncalves
 * \date   : 30-08-24
 * \file   : test_db.cpp
 * \since  : 1.0
 */

#include <db/bank.hpp>
#include <gtest/gtest.h>
#include <iostream>

TEST(Bank,connect){ EXPECT_EQ(Bank().connect(), true); }

