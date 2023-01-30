cmake_minimum_required(VERSION 3.19)

project (test_fmt)


find_library(FMT_LIBRARIES 
	NAMES libfmt.so
	PATHS /usr/local/lib/
)
find_path(FMT_INCLUDE_DIRS
	NAMES printf.h
	PATHS /usr/local/include/fmt
)
message("FMT_INCLUDE_DIRS: ${FMT_INCLUDE_DIRS}")
message("FMT_LIBRARIES: ${FMT_LIBRARIES}")

add_executable(test_fmt main.cpp)

target_link_libraries(test_fmt ${FMT_LIBRARIES})
target_include_directories(test_fmt PUBLIC ${FMT_INCLUDE_DIRS})