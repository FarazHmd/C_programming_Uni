cmake_minimum_required(VERSION 3.16)
project(STACK C)

set(CMAKE_C_STANDARD 11)

add_library(STACK SHARED stack.c stack.h)