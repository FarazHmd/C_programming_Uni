cmake_minimum_required(VERSION 3.16)
project(SSORT C)

set(CMAKE_C_STANDARD 11)

add_library(SSORT SHARED SSORT.c SSORT.h)