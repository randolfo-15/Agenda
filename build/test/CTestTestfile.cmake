# CMake generated Testfile for 
# Source directory: /home/randolfo/dev/Agenda/test
# Build directory: /home/randolfo/dev/Agenda/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/randolfo/dev/Agenda/build/test/test_datas[1]_include.cmake")
include("/home/randolfo/dev/Agenda/build/test/test_bank[1]_include.cmake")
add_test([=[Bank]=] "/home/randolfo/dev/Agenda/build/test/test_bank")
set_tests_properties([=[Bank]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/randolfo/dev/Agenda/test/CMakeLists.txt;30;add_test;/home/randolfo/dev/Agenda/test/CMakeLists.txt;0;")
add_test([=[Datas]=] "/home/randolfo/dev/Agenda/build/test/test_datas")
set_tests_properties([=[Datas]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/randolfo/dev/Agenda/test/CMakeLists.txt;31;add_test;/home/randolfo/dev/Agenda/test/CMakeLists.txt;0;")
