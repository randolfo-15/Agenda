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
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/randolfo/dev/Agenda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/randolfo/dev/Agenda/build

# Include any dependencies generated for this target.
include test/CMakeFiles/test_contact.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/test_contact.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_contact.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_contact.dir/flags.make

test/CMakeFiles/test_contact.dir/test_contact.cpp.o: test/CMakeFiles/test_contact.dir/flags.make
test/CMakeFiles/test_contact.dir/test_contact.cpp.o: /home/randolfo/dev/Agenda/test/test_contact.cpp
test/CMakeFiles/test_contact.dir/test_contact.cpp.o: test/CMakeFiles/test_contact.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/randolfo/dev/Agenda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_contact.dir/test_contact.cpp.o"
	cd /home/randolfo/dev/Agenda/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test_contact.dir/test_contact.cpp.o -MF CMakeFiles/test_contact.dir/test_contact.cpp.o.d -o CMakeFiles/test_contact.dir/test_contact.cpp.o -c /home/randolfo/dev/Agenda/test/test_contact.cpp

test/CMakeFiles/test_contact.dir/test_contact.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_contact.dir/test_contact.cpp.i"
	cd /home/randolfo/dev/Agenda/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/randolfo/dev/Agenda/test/test_contact.cpp > CMakeFiles/test_contact.dir/test_contact.cpp.i

test/CMakeFiles/test_contact.dir/test_contact.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_contact.dir/test_contact.cpp.s"
	cd /home/randolfo/dev/Agenda/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/randolfo/dev/Agenda/test/test_contact.cpp -o CMakeFiles/test_contact.dir/test_contact.cpp.s

# Object files for target test_contact
test_contact_OBJECTS = \
"CMakeFiles/test_contact.dir/test_contact.cpp.o"

# External object files for target test_contact
test_contact_EXTERNAL_OBJECTS = \
"/home/randolfo/dev/Agenda/build/src/CMakeFiles/Contact.dir/Contact.cpp.o"

test/test_contact: test/CMakeFiles/test_contact.dir/test_contact.cpp.o
test/test_contact: src/CMakeFiles/Contact.dir/Contact.cpp.o
test/test_contact: test/CMakeFiles/test_contact.dir/build.make
test/test_contact: /usr/lib/libgtest_main.so.1.15.2
test/test_contact: /usr/lib/libgtest.so.1.15.2
test/test_contact: test/CMakeFiles/test_contact.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/randolfo/dev/Agenda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_contact"
	cd /home/randolfo/dev/Agenda/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_contact.dir/link.txt --verbose=$(VERBOSE)
	cd /home/randolfo/dev/Agenda/build/test && /usr/bin/cmake -D TEST_TARGET=test_contact -D TEST_EXECUTABLE=/home/randolfo/dev/Agenda/build/test/test_contact -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/randolfo/dev/Agenda/build/test -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_contact_TESTS -D CTEST_FILE=/home/randolfo/dev/Agenda/build/test/test_contact[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
test/CMakeFiles/test_contact.dir/build: test/test_contact
.PHONY : test/CMakeFiles/test_contact.dir/build

test/CMakeFiles/test_contact.dir/clean:
	cd /home/randolfo/dev/Agenda/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test_contact.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_contact.dir/clean

test/CMakeFiles/test_contact.dir/depend:
	cd /home/randolfo/dev/Agenda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/randolfo/dev/Agenda /home/randolfo/dev/Agenda/test /home/randolfo/dev/Agenda/build /home/randolfo/dev/Agenda/build/test /home/randolfo/dev/Agenda/build/test/CMakeFiles/test_contact.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/test_contact.dir/depend

