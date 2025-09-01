cmake_minimum_required(VERSION 4.0)
project(ToDoApp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ToDoApp main.cpp
        include/ToDoItem.h
        include/ToDoListManager.h
        src/ToDoListManager.cpp)
