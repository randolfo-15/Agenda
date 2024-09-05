find_package(GTest)

# --------------------------- Datas ---------------------------
add_executable( test_Cnt test_datas.cpp)

target_link_libraries( test_Cnt
    PRIVATE
    GTest::gtest_main
    Cnt
)

# -------------------------- Bank -------------------------------
add_executable( test_Bnk
    test_db.cpp
)

target_link_libraries(
    test_Bnk
    PRIVATE
    GTest::gtest_main
    Cnt
    Bnk
)
# -------------------------- Add Test ----------------------------
include(GoogleTest)
gtest_discover_tests(test_Cnt)
gtest_discover_tests(test_Bnk )

add_test(NAME Test_Bnk COMMAND test_Bnk)
add_test(NAME Test_Cnt COMMAND test_Cnt)

