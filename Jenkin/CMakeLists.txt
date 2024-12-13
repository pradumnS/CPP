cmake_minimum_required(VERSION 3.10)  # Minimum CMake version required

# Set the project name and version
project(MyCppProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)  # Or C++11, C++14, etc.
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable target and specify the source files
add_executable(MyCppProject main.cpp P1_ConsumerProducer.cpp)
