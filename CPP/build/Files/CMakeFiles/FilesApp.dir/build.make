# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/LiveToCode/CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/LiveToCode/CPP/build

# Include any dependencies generated for this target.
include Files/CMakeFiles/FilesApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Files/CMakeFiles/FilesApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Files/CMakeFiles/FilesApp.dir/progress.make

# Include the compile flags for this target's objects.
include Files/CMakeFiles/FilesApp.dir/flags.make

Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o: Files/CMakeFiles/FilesApp.dir/flags.make
Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o: ../Files/src/filesReadWrite.cpp
Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o: Files/CMakeFiles/FilesApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/LiveToCode/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o -MF CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o.d -o CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o -c /home/LiveToCode/CPP/Files/src/filesReadWrite.cpp

Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.i"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/LiveToCode/CPP/Files/src/filesReadWrite.cpp > CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.i

Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.s"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/LiveToCode/CPP/Files/src/filesReadWrite.cpp -o CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.s

Files/CMakeFiles/FilesApp.dir/main.cpp.o: Files/CMakeFiles/FilesApp.dir/flags.make
Files/CMakeFiles/FilesApp.dir/main.cpp.o: ../Files/main.cpp
Files/CMakeFiles/FilesApp.dir/main.cpp.o: Files/CMakeFiles/FilesApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/LiveToCode/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Files/CMakeFiles/FilesApp.dir/main.cpp.o"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Files/CMakeFiles/FilesApp.dir/main.cpp.o -MF CMakeFiles/FilesApp.dir/main.cpp.o.d -o CMakeFiles/FilesApp.dir/main.cpp.o -c /home/LiveToCode/CPP/Files/main.cpp

Files/CMakeFiles/FilesApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FilesApp.dir/main.cpp.i"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/LiveToCode/CPP/Files/main.cpp > CMakeFiles/FilesApp.dir/main.cpp.i

Files/CMakeFiles/FilesApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FilesApp.dir/main.cpp.s"
	cd /home/LiveToCode/CPP/build/Files && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/LiveToCode/CPP/Files/main.cpp -o CMakeFiles/FilesApp.dir/main.cpp.s

# Object files for target FilesApp
FilesApp_OBJECTS = \
"CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o" \
"CMakeFiles/FilesApp.dir/main.cpp.o"

# External object files for target FilesApp
FilesApp_EXTERNAL_OBJECTS =

Files/FilesApp: Files/CMakeFiles/FilesApp.dir/src/filesReadWrite.cpp.o
Files/FilesApp: Files/CMakeFiles/FilesApp.dir/main.cpp.o
Files/FilesApp: Files/CMakeFiles/FilesApp.dir/build.make
Files/FilesApp: Files/CMakeFiles/FilesApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/LiveToCode/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FilesApp"
	cd /home/LiveToCode/CPP/build/Files && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FilesApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Files/CMakeFiles/FilesApp.dir/build: Files/FilesApp
.PHONY : Files/CMakeFiles/FilesApp.dir/build

Files/CMakeFiles/FilesApp.dir/clean:
	cd /home/LiveToCode/CPP/build/Files && $(CMAKE_COMMAND) -P CMakeFiles/FilesApp.dir/cmake_clean.cmake
.PHONY : Files/CMakeFiles/FilesApp.dir/clean

Files/CMakeFiles/FilesApp.dir/depend:
	cd /home/LiveToCode/CPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/LiveToCode/CPP /home/LiveToCode/CPP/Files /home/LiveToCode/CPP/build /home/LiveToCode/CPP/build/Files /home/LiveToCode/CPP/build/Files/CMakeFiles/FilesApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Files/CMakeFiles/FilesApp.dir/depend

