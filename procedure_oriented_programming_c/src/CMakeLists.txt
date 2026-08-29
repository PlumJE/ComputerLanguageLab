cmake_minimum_required(VERSION 3.20)

project(ProcedureOrientedProgrammingC)

add_executable(
    ProcedureOrientedProgrammingC
    src/main/main.c
    src/day/day.c
)

target_include_directories(
    ProcedureOrientedProgrammingC
    PRIVATE
    src
)

set_property(
    TARGET ProcedureOrientedProgrammingC
    PROPERTY C_STANDARD 23
)