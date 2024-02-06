cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME callback)
set(LIBRARY_NAME my_libs)

project(
    ${PROJECT_NAME}
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)


option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

add_subdirectory(libs)

if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()
