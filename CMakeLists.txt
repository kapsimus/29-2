cmake_minimum_required(VERSION 3.22)
project(29_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(29_2 src/main.cpp include/Shape.h src/Shape.cpp include/Circle.h src/Circle.cpp include/Rectangle.h src/Rectangle.cpp include/Triangle.h src/Triangle.cpp)
target_include_directories(29_2 PUBLIC include)
