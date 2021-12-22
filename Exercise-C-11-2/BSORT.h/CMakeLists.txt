cmake_minimum_required(VERSION 3.16)
project(BSORT_h C)

set(CMAKE_C_STANDARD 11)

add_library(BSORT_h SHARED BSORT.c BSORT.h)