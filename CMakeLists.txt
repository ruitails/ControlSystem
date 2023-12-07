cmake_minimum_required(VERSION 3.16.0)

include(pico_sdk_import.cmake)

project(
    "ControlSystem"
    VERSION 1.0.0
    LANGUAGES C CXX)

pico_sdk_init()

# Project/Library Names
set(LIBRARY_NAME "lib")
set(EXECUTABLE_NAME "main")

# SUB DIRECTORIES
add_subdirectory(external)
add_subdirectory(app)

pico_add_extra_outputs(blink)