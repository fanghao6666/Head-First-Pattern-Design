cmake_minimum_required (VERSION 2.6)

project(duck)

aux_source_directory(. SRC_LIST)

add_executable(main ${SRC_LIST})