cmake_minimum_required(VERSION 3.15)
project(mydb)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(nisseDB
        column.cpp
        column.h
        main.cpp
        query.cpp
        query.h
        queryUtil.cpp
        queryUtil.h
        row.cpp
        row.h
        table.cpp
        table.h)
