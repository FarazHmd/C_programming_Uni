cmake_minimum_required(VERSION 3.16)
project(POSTFIX C)

set(CMAKE_C_STANDARD 11)

add_library(POSTFIX SHARED postfix.c postfix.h)