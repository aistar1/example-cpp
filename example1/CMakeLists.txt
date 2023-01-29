cmake_minimum_required(VERSION 3.19)

project (myproject)

add_library(myproject STATIC src/add_num.cpp)
target_include_directories(myproject 
    PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

add_executable(myapp src/main.cpp)
target_link_libraries(myapp myproject)
