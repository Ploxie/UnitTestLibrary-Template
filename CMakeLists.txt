cmake_minimum_required(VERSION 3.17.0)

set(PROJECT_NAME Library-Test)

project(${PROJECT_NAME} VERSION 1.0.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/libs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/bin)

add_subdirectory(googletest)
add_subdirectory(Library)
add_subdirectory(Library-Tests)
