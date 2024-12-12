cmake_minimum_required(VERSION 3.10)

project(STL)

# Include directories
include_directories(include)

# Add source files
set(SOURCES
    #undefined reference to `oddEven::initialserOddEven()'
    # because I have not included the odd_even file that caused undefine or linking error
    src/String.cpp
    src/MyVector.cpp
    main.cpp
)

# Add executable
add_executable(STLexe ${SOURCES})

# Link threading libraries
find_package(Threads REQUIRED)
target_link_libraries(STLexe PRIVATE Threads::Threads)
