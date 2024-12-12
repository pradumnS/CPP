cmake_minimum_required(VERSION 3.10)
project(CPP_Project)

# Add the Multithreading subdirectory
add_subdirectory(Multithreading)
add_subdirectory(Files)
add_subdirectory(STL)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
