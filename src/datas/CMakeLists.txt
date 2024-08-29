add_library(Contact OBJECT )

target_sources(Contact
    PRIVATE
        Notas.cpp 
        Book.cpp 
        Contact.cpp 
)

target_include_directories(Contact 
    PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/datas>
    # $<INSTALL_INTERFACE:include>
)

