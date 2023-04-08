cmake_minimum_required(VERSION 3.21)
project(cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(cmake main.cpp)

enable_testing()

add_executable( UT test/directory/calculator.test.cpp)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(UT PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

add_test(AllTestInMain UT)


