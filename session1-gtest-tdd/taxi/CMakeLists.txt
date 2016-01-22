set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES gtest-all.cc gtest_main.cc taxiSpec.cpp taxi.h gtest.h)

add_executable(taxi ${SOURCE_FILES})