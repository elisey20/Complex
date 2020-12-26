cmake_minimum_required(VERSION 3.17)
project(Complex)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES source/methods.cpp)

add_subdirectory(googletest)

add_executable(Complex main.cpp ${SOURCE_FILES})
add_executable(tests tests.cpp ${SOURCE_FILES})

target_include_directories(Complex PRIVATE source)
target_include_directories(tests PRIVATE googletest/googletest/include PRIVATE source)

target_link_libraries(tests gtest)