cmake_minimum_required(VERSION 3.17)
project(school_clion)

set(CMAKE_CXX_STANDARD 17)

add_executable(school_clion main.cpp tools/random_array.cpp  sort/quicksort.cpp tools/output.cpp  student_array/student_array.cpp sort/bubblesort.cpp)