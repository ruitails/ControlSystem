add_executable(${EXE} main.c)

target_link_libraries(${EXE}
    ${LIB}
    pico_stdlib
    hardware_uart)

pico_add_extra_outputs(${EXE})