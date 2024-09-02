cmake_minimum_required(VERSION 3.27)

project(Agenda

        VERSION 1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# ----------------- Source -----------------
include_directories("include")
add_subdirectory("src")


# ------------------ Test ------------------ 
enable_testing()
add_subdirectory(test)


