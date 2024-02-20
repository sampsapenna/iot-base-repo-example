add_library(simple_maths
    STATIC
    simple_maths.c
)

target_link_libraries(simple_maths pico_stdlib)
