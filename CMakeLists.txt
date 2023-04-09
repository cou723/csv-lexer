cmake_minimum_required(VERSION 3.25)
project(my_csv_parser)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(my_csv_parser
        CsvParser.cpp
        CsvParser.hpp
        main.cpp)
