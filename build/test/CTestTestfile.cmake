# CMake generated Testfile for 
# Source directory: /data/data/com.termux/files/home/dev/Agenda/test
# Build directory: /data/data/com.termux/files/home/dev/Agenda/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/data/data/com.termux/files/home/dev/Agenda/build/test/test_datas[1]_include.cmake")
include("/data/data/com.termux/files/home/dev/Agenda/build/test/test_bank[1]_include.cmake")
add_test([=[Bank]=] "/data/data/com.termux/files/home/dev/Agenda/build/test/test_bank")
set_tests_properties([=[Bank]=] PROPERTIES  _BACKTRACE_TRIPLES "/data/data/com.termux/files/home/dev/Agenda/test/CMakeLists.txt;30;add_test;/data/data/com.termux/files/home/dev/Agenda/test/CMakeLists.txt;0;")
add_test([=[Datas]=] "/data/data/com.termux/files/home/dev/Agenda/build/test/test_datas")
set_tests_properties([=[Datas]=] PROPERTIES  _BACKTRACE_TRIPLES "/data/data/com.termux/files/home/dev/Agenda/test/CMakeLists.txt;31;add_test;/data/data/com.termux/files/home/dev/Agenda/test/CMakeLists.txt;0;")
