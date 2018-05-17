cmake_minimum_required(VERSION 3.2)

project(pseudocron_tests)
file(GLOB SOURCES "*.cxx" "*.hxx")
add_executable(pseudocron_tests ${SOURCES})
