project(hypercore C)

# Required cmake version
cmake_minimum_required(VERSION 2.6.0)

# global needed variables
set(APPLICATION_NAME ${PROJECT_NAME})

set(APPLICATION_VERSION_MAJOR "0")
set(APPLICATION_VERSION_MINOR "0")
set(APPLICATION_VERSION_PATCH "0")

set(APPLICATION_VERSION "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}.${APPLICATION_VERSION_PATCH}")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(examples)
add_subdirectory(test)
