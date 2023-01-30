cmake_minimum_required(VERSION 3.19)

project(test_opencv)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(test_opencv main.cpp)
target_link_libraries(test_opencv ${OpenCV_LIBS})