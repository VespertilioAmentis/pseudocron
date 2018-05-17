cmake_minimum_required(VERSION 3.2)

project(pseudocron_daemon)
set(daemon_sources
    main.cxx
    task.hxx
    task.cxx)
add_executable(pseudocron_daemon ${daemon_sources})
