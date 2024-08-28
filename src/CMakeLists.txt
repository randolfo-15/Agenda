add_library(Notes OBJECT Notas.cpp)

add_library(Book OBJECT Book.cpp)

add_library(Contact OBJECT Contact.cpp)


target_link_libraries(Book PRIVATE Notes)

target_link_libraries(Contact PRIVATE Book)
 
#target_sources(mosaicos
#    PRIVATE
#        str.cpp
#        colour.cpp
#        effect.cpp
#    PUBLIC FILE_SET HEADERS 
#        FILES 
#            gd_rag.hpp
#                        
#)



target_include_directories(Contact PUBLIC ${CMAKE_SOURCE_DIR}/hrd)

target_include_directories(Book PUBLIC ${CMAKE_SOURCE_DIR}/hrd)

target_include_directories(Notes PUBLIC ${CMAKE_SOURCE_DIR}/hrd)


