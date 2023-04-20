cmake_minimum_required(VERSION 3.22)
project(scheduler)

SET(INCLUDE_DIR
    "include/schedular")

set(SOURCES 
    main.cpp 
    src/schedular/p_task.cpp 
    src/schedular/task.cpp)

set(EXEC 
    main.exe)

include_directories(${INCLUDE_DIR})

add_executable(${EXEC} ${SOURCES})


