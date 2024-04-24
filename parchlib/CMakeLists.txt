set(SOURCES
    src/dummy.cpp
    )

add_library(parchlib ${SOURCES})
target_include_directories(parchlib PRIVATE src ${CMAKE_CURRENT_BINARY_DIR} PUBLIC api)