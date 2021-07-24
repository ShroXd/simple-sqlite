cmake_minimum_required(VERSION 3.10)

project(db C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/runtime)

add_executable(db lib/main.c)