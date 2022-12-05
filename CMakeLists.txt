cmake_minimum_required(VERSION 3.0.0)
project(CS014_Lab4 VERSION 1.0.0)

add_subdirectory(${CMAKE_BINARY_DIR}/../googletest)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_executable(my_stack 
    ./src/main.cpp
)

add_executable(stack_test
    ./src/unit_test.cpp
)

TARGET_LINK_LIBRARIES(stack_test gtest)
TARGET_COMPILE_DEFINITIONS(stack_test PRIVATE gtest_disable_pthreads=ON)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

