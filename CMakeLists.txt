cmake_minimum_required(VERSION 3.10)

project(tic_tac_toe)

add_executable(tic_tac_toe main.cpp)

install(TARGETS tic_tac_toe RUNTIME DESTINATION bin)
