cmake_minimum_required(VERSION 3.17)
project(school_clion)

set(CMAKE_CXX_STANDARD 17)

add_executable(school_clion main.cpp tools/random_array.cpp tools/random_array.h quicksort/quicksort.cpp quicksort/quicksort.h tools/output.cpp tools/output.h)