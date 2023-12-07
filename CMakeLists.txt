cmake_minimum_required(VERSION 3.16.0)

project(
    "ControlSystem"
    VERSION 1.0.0
    LANGUAGES C CXX)

# Project/Library Names
set(LIBRARY_NAME "lib")
set(EXECUTABLE_NAME "main")

# SUB DIRECTORIES
add_subdirectory(external)
add_subdirectory(app)