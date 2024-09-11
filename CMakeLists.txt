cmake_minimum_required(VERSION 3.28.3)

PROJECT(strings)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Precise/)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
