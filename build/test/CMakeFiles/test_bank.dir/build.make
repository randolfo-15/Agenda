# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /data/data/com.termux/files/usr/bin/sh

# The CMake executable.
CMAKE_COMMAND = /data/data/com.termux/files/usr/bin/cmake

# The command to remove a file.
RM = /data/data/com.termux/files/usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/data/com.termux/files/home/dev/Agenda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/data/com.termux/files/home/dev/Agenda/build

# Include any dependencies generated for this target.
include test/CMakeFiles/test_bank.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/test_bank.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_bank.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_bank.dir/flags.make

test/CMakeFiles/test_bank.dir/test_db.cpp.o: test/CMakeFiles/test_bank.dir/flags.make
test/CMakeFiles/test_bank.dir/test_db.cpp.o: /data/data/com.termux/files/home/dev/Agenda/test/test_db.cpp
test/CMakeFiles/test_bank.dir/test_db.cpp.o: test/CMakeFiles/test_bank.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/data/data/com.termux/files/home/dev/Agenda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_bank.dir/test_db.cpp.o"
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && /data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test_bank.dir/test_db.cpp.o -MF CMakeFiles/test_bank.dir/test_db.cpp.o.d -o CMakeFiles/test_bank.dir/test_db.cpp.o -c /data/data/com.termux/files/home/dev/Agenda/test/test_db.cpp

test/CMakeFiles/test_bank.dir/test_db.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_bank.dir/test_db.cpp.i"
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && /data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/data/com.termux/files/home/dev/Agenda/test/test_db.cpp > CMakeFiles/test_bank.dir/test_db.cpp.i

test/CMakeFiles/test_bank.dir/test_db.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_bank.dir/test_db.cpp.s"
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && /data/data/com.termux/files/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/data/com.termux/files/home/dev/Agenda/test/test_db.cpp -o CMakeFiles/test_bank.dir/test_db.cpp.s

# Object files for target test_bank
test_bank_OBJECTS = \
"CMakeFiles/test_bank.dir/test_db.cpp.o"

# External object files for target test_bank
test_bank_EXTERNAL_OBJECTS = \
"/data/data/com.termux/files/home/dev/Agenda/build/src/CMakeFiles/Bank.dir/db/bank.cpp.o"

test/test_bank: test/CMakeFiles/test_bank.dir/test_db.cpp.o
test/test_bank: src/CMakeFiles/Bank.dir/db/bank.cpp.o
test/test_bank: test/CMakeFiles/test_bank.dir/build.make
test/test_bank: /data/data/com.termux/files/usr/lib/libgtest_main.so
test/test_bank: /data/data/com.termux/files/usr/lib/libgtest.so
test/test_bank: test/CMakeFiles/test_bank.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/data/data/com.termux/files/home/dev/Agenda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_bank"
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_bank.dir/link.txt --verbose=$(VERBOSE)
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && /data/data/com.termux/files/usr/bin/cmake -D TEST_TARGET=test_bank -D TEST_EXECUTABLE=/data/data/com.termux/files/home/dev/Agenda/build/test/test_bank -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/data/data/com.termux/files/home/dev/Agenda/build/test -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_bank_TESTS -D CTEST_FILE=/data/data/com.termux/files/home/dev/Agenda/build/test/test_bank[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /data/data/com.termux/files/usr/share/cmake-3.30/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
test/CMakeFiles/test_bank.dir/build: test/test_bank
.PHONY : test/CMakeFiles/test_bank.dir/build

test/CMakeFiles/test_bank.dir/clean:
	cd /data/data/com.termux/files/home/dev/Agenda/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test_bank.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_bank.dir/clean

test/CMakeFiles/test_bank.dir/depend:
	cd /data/data/com.termux/files/home/dev/Agenda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/data/com.termux/files/home/dev/Agenda /data/data/com.termux/files/home/dev/Agenda/test /data/data/com.termux/files/home/dev/Agenda/build /data/data/com.termux/files/home/dev/Agenda/build/test /data/data/com.termux/files/home/dev/Agenda/build/test/CMakeFiles/test_bank.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/test_bank.dir/depend

