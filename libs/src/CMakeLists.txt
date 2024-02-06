add_library(
    ${LIBRARY_NAME} 
    STATIC 
    switch.cpp
    lamp.cpp
    tvSet.cpp)

target_include_directories(
    ${LIBRARY_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include)