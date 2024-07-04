cmake_minimum_required(VERSION 3.28)
project(ImgStacker)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(LibRaw)

find_package(LibRaw REQUIRED)

find_package(OpenCV REQUIRED)

add_executable(ImgStacker main.cpp)
