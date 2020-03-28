cmake_minimum_required(VERSION 3.17.0)

set(PROJECT_NAME PUtils)

project(${PROJECT_NAME} VERSION 1.0.0)

file(GLOB_RECURSE HEADER_FILES "src/*.h")
file(GLOB_RECURSE SOURCES_FILES "src/*.cpp")

add_library(${PROJECT_NAME} STATIC ${SOURCES_FILES} ${HEADERS_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
