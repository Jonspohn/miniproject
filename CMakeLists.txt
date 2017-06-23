cmake_minimum_required(VERSION 3.5.1)
project(Sort_algorithms)

include_directories(include) 

#set(SOURCES src/main.cpp src/bubble.cpp src/merge.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(testMain ${SOURCES})

