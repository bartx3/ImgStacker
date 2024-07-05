cmake_minimum_required(VERSION 3.28)
project(ImgStacker)

set(CMAKE_CXX_STANDARD 17)

add_executable(ImgStacker src/main.cpp
        include/ImgReader.hpp
        src/RawImgReader.cpp
        include/RawImgReader.hpp
)

# LibRaw
set(LIBRAW_PATH ${CMAKE_CURRENT_SOURCE_DIR}/LibRaw)
add_subdirectory(LibRaw-cmake)
target_link_libraries(ImgStacker PRIVATE libraw::libraw)

#OpenCV
find_package(OpenCV REQUIRED)
target_link_libraries(ImgStacker PRIVATE ${OpenCV_LIBS})

# Include directories
target_include_directories(ImgStacker PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${LIBRAW_PATH})