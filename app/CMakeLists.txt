add_executable(parch parch/src/parch.cpp)

target_link_libraries(parch PRIVATE parchlib cxxopts)
target_include_directories(parch PRIVATE ${CMAKE_CURRENT_BINARY_DIR})