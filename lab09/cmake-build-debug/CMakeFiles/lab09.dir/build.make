# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab09.dir/flags.make

CMakeFiles/lab09.dir/magic_squares.cpp.o: CMakeFiles/lab09.dir/flags.make
CMakeFiles/lab09.dir/magic_squares.cpp.o: ../magic_squares.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab09.dir/magic_squares.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab09.dir/magic_squares.cpp.o -c /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/magic_squares.cpp

CMakeFiles/lab09.dir/magic_squares.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab09.dir/magic_squares.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/magic_squares.cpp > CMakeFiles/lab09.dir/magic_squares.cpp.i

CMakeFiles/lab09.dir/magic_squares.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab09.dir/magic_squares.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/magic_squares.cpp -o CMakeFiles/lab09.dir/magic_squares.cpp.s

# Object files for target lab09
lab09_OBJECTS = \
"CMakeFiles/lab09.dir/magic_squares.cpp.o"

# External object files for target lab09
lab09_EXTERNAL_OBJECTS =

lab09: CMakeFiles/lab09.dir/magic_squares.cpp.o
lab09: CMakeFiles/lab09.dir/build.make
lab09: CMakeFiles/lab09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab09"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab09.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab09.dir/build: lab09

.PHONY : CMakeFiles/lab09.dir/build

CMakeFiles/lab09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab09.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab09.dir/clean

CMakeFiles/lab09.dir/depend:
	cd /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09 /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09 /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug /Users/leemiles/Developer/Truman_CS180/Truman-CS180-Course/lab09/cmake-build-debug/CMakeFiles/lab09.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab09.dir/depend

