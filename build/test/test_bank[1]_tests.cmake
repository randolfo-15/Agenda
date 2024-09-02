add_test([=[Bank.connect]=]  /data/data/com.termux/files/home/dev/Agenda/build/test/test_bank [==[--gtest_filter=Bank.connect]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Bank.connect]=]  PROPERTIES WORKING_DIRECTORY /data/data/com.termux/files/home/dev/Agenda/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_bank_TESTS Bank.connect)
