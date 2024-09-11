cmake_minimum_required(VERSION 3.28.3)

add_library(precise precise.cpp)

target_link_libraries(${PROJECT_NAME} precise)

install(TARGETS precise DESTINATION lib/precise)
install(FILES precise.hpp DESTINATION include/precise)
