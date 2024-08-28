find_package(GTest)



add_executable(
    test_contact
    test_contact.cpp
)

target_link_libraries(
    test_contact
    PRIVATE
    GTest::gtest_main
    Contact
)



include(GoogleTest)
gtest_discover_tests(test_contact)


add_test(NAME Contact COMMAND test_contact)
