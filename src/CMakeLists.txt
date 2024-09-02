# --------------------------- Datas ---------------------------
add_library(Contact OBJECT )

target_sources(Contact
    PRIVATE
        datas/Notas.cpp 
        datas/Book.cpp 
        datas/Contact.cpp 
)

target_include_directories(Contact 
    PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/datas>
    # $<INSTALL_INTERFACE:include>
)

# -------------------------- Bank -------------------------------

add_library(Bank OBJECT)

target_sources(Bank
    PRIVATE
        db/bank.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpqxx -lpq")

target_link_libraries(Bank
    PRIVATE 
        pq
)

target_include_directories(Bank
    PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/db>
    # $<INSTALL_INTERFACE:include>
)

