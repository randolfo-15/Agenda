# ----------------- Achievable -----------------

add_library(Ach OBJECT ${SOURCE_DIR}/db/Arq.cpp)

target_include_directories(Ach PUBLIC ${INCLUDE_DIR}/db)

target_link_libraries(Ach PRIVATE pq)

# ------------------ Contact -------------------

add_library(Cnt OBJECT)

target_sources(Cnt 
    PRIVATE 
        ${SOURCE_DIR}/db/Arq.cpp
        ${SOURCE_DIR}/datas/Notas.cpp
        ${SOURCE_DIR}/datas/Book.cpp
        ${SOURCE_DIR}/datas/Contact.cpp
)

target_include_directories( Cnt PUBLIC ${INCLUDE_DIR}/datas )

target_link_libraries(Cnt PRIVATE Ach)

# ------------------- Bank ---------------------

add_library(Bnk OBJECT)

target_sources(Bnk 
    PRIVATE 
        ${SOURCE_DIR}/db/Arq.cpp
        ${SOURCE_DIR}/db/Bank.cpp
)

target_include_directories( Bnk PUBLIC ${INCLUDE_DIR}/db )

target_link_libraries(Bnk PRIVATE Ach)

