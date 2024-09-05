# CMake generated Testfile for 
# Source directory: /home/randolfo/dev/Agenda/test
# Build directory: /home/randolfo/dev/Agenda/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/randolfo/dev/Agenda/build/test/test_Cnt[1]_include.cmake")
include("/home/randolfo/dev/Agenda/build/test/test_Bnk[1]_include.cmake")
add_test([=[Test_Bnk]=] "/home/randolfo/dev/Agenda/build/test/test_Bnk")
set_tests_properties([=[Test_Bnk]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/randolfo/dev/Agenda/test/CMakeLists.txt;28;add_test;/home/randolfo/dev/Agenda/test/CMakeLists.txt;0;")
add_test([=[Test_Cnt]=] "/home/randolfo/dev/Agenda/build/test/test_Cnt")
set_tests_properties([=[Test_Cnt]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/randolfo/dev/Agenda/test/CMakeLists.txt;29;add_test;/home/randolfo/dev/Agenda/test/CMakeLists.txt;0;")
