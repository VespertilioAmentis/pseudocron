cmake_minimum_required(VERSION 3.2)

project(pseudocron_tests)
set(daemon_sources
    main.cxx
    task_tests.cxx
    ../pseudocron_daemon/task.hxx
    ../pseudocron_daemon/task.cxx)
include_directories(..)
add_executable(pseudocron_tests ${daemon_sources})
target_link_libraries(pseudocron_tests
    gtest
    pthread)
