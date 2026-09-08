cmake_minimum_required(VERSION 3.15)

project(procedure_oriented_programming_c LANGUAGES C)
set(day_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/day)

add_library(day ${day_dir}/day.h ${day_dir}/day.c)
add_executable(procedure_oriented_programming_c
        src/procedure_oriented_programming_c.c
        src/main.c
)
target_include_directories(procedure_oriented_programming_c PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${day_dir}
)
target_link_libraries(procedure_oriented_programming_c day)

install(TARGETS procedure_oriented_programming_c DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
)
