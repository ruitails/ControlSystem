cmake_minimum_required(VERSION 3.16.0)

include(src/pico-sdk/pico_sdk_init.cmake)

project(
    "ControlSystem"
    VERSION 1.0.0
    LANGUAGES C CXX)

pico_sdk_init()

set(LIB Library)
set(EXE Executable)

add_subdirectory(app)
add_subdirectory(src)

