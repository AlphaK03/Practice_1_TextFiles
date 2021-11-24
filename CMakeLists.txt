cmake_minimum_required(VERSION 3.17)
project(progra2-project-2-bravo)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(data_files)

add_subdirectory(src)
#add_subdirectory(tst)

## Use next line if you are going to use Google Test
#add_subdirectory(lib/googletest)