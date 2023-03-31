cmake_minimum_required(VERSION 3.24)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Structures_and_Algorithms main.cpp "includes/algorithms/SelectionSorter.h" "src/algorithms/SelectionSorter.cpp" "includes/utils/Swapper.h" "src/utils/Swapper.cpp" "src/utils/ArrayPrinter.cpp" "includes/utils/ArrayPrinter.h")
