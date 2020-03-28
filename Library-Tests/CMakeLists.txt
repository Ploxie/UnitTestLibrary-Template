cmake_minimum_required(VERSION 3.17.0)

set(PROJECT_NAME Library-Tests)

project(${PROJECT_NAME} VERSION 1.0.0)

file(GLOB_RECURSE HEADERS "*.h")
file(GLOB_RECURSE SOURCE "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE} ${HEADER})
target_link_libraries(${PROJECT_NAME} PUBLIC
    gtest_main
    PUtils
)

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)

