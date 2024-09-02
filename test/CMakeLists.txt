find_package(GTest)

# --------------------------- Datas ---------------------------
add_executable( test_datas
    test_datas.cpp
)

target_link_libraries(
    test_datas
    PRIVATE
    GTest::gtest_main
    Contact
)
# -------------------------- Bank -------------------------------
add_executable( test_bank
    test_db.cpp
)

target_link_libraries(
    test_bank
    PRIVATE
    GTest::gtest_main
    Bank
)
# -------------------------- Add Test ----------------------------
include(GoogleTest)
gtest_discover_tests(test_datas)
gtest_discover_tests(test_bank )

add_test(NAME Bank  COMMAND test_bank)
add_test(NAME Datas COMMAND test_datas)

