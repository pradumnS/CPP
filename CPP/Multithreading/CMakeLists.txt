cmake_minimum_required(VERSION 3.10)

project(Multithreading)

# Include directories
include_directories(include)

# Add source files
set(SOURCES
    src/P1_ConsumerProducer.cpp
    #undefined reference to `oddEven::initialserOddEven()'
    # because I have not included the odd_even file that caused undefine or linking error
    src/odd_even.cpp
    src/threadSafeCounter.cpp
    src/threadPool.cpp
    main.cpp
)

# Add executable
add_executable(MultithreadingApp ${SOURCES})

# Link threading libraries
find_package(Threads REQUIRED)
target_link_libraries(MultithreadingApp PRIVATE Threads::Threads)
