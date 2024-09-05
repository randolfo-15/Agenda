cmake_minimum_required(VERSION 3.27)

project(Agenda

        VERSION 1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#----------------- Defines -----------------
# Defina o diretório de fontes
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

# Defina o diretório de Cabeçarios
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
 
# ----------------- Source -----------------
include_directories(${INCLUDE_DIR})
add_subdirectory(${SOURCE_DIR})


# ------------------ Test ------------------ 
enable_testing()
add_subdirectory(test)


