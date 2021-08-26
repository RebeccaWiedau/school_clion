cmake_minimum_required(VERSION 3.17)
project(school_clion)

set(CMAKE_CXX_STANDARD 17)

add_executable(school_clion main.cpp
    tools/random_array.cpp
    tools/output.cpp
    sort/quicksort.cpp
    sort/bubblesort.cpp

    student_array/student_array.cpp
    funktionszeiger/funktionszeiger.cpp
    wiederholung/wiederholung.cpp
    )