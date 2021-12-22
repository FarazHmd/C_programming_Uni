cmake_minimum_required(VERSION 3.16)
project(BSORTD_h C)

set(CMAKE_C_STANDARD 11)

add_library(BSORTD_h SHARED BSORTD.c BSORTD.h)