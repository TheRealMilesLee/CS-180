# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab03b.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab03b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab03b.dir/flags.make

CMakeFiles/lab03b.dir/Java_Joe.cpp.o: CMakeFiles/lab03b.dir/flags.make
CMakeFiles/lab03b.dir/Java_Joe.cpp.o: ../Java_Joe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab03b.dir/Java_Joe.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab03b.dir/Java_Joe.cpp.o -c /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/Java_Joe.cpp

CMakeFiles/lab03b.dir/Java_Joe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab03b.dir/Java_Joe.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/Java_Joe.cpp > CMakeFiles/lab03b.dir/Java_Joe.cpp.i

CMakeFiles/lab03b.dir/Java_Joe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab03b.dir/Java_Joe.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/Java_Joe.cpp -o CMakeFiles/lab03b.dir/Java_Joe.cpp.s

# Object files for target lab03b
lab03b_OBJECTS = \
"CMakeFiles/lab03b.dir/Java_Joe.cpp.o"

# External object files for target lab03b
lab03b_EXTERNAL_OBJECTS =

lab03b: CMakeFiles/lab03b.dir/Java_Joe.cpp.o
lab03b: CMakeFiles/lab03b.dir/build.make
lab03b: CMakeFiles/lab03b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab03b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab03b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab03b.dir/build: lab03b

.PHONY : CMakeFiles/lab03b.dir/build

CMakeFiles/lab03b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab03b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab03b.dir/clean

CMakeFiles/lab03b.dir/depend:
	cd /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab03b/cmake-build-debug/CMakeFiles/lab03b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab03b.dir/depend

