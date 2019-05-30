cmake_minimum_required(VERSION 3.13)
project(COMP9024_19T2)

set(CMAKE_CXX_STANDARD 14)

include_directories(Pre_Class)

add_executable(COMP9024_19T2
        Pre_Class/tree/tree.h
        Pre_Class/tree/tree.c
        Pre_Class/tree/main.c
        )
