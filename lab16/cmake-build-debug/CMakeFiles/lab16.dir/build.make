# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\JetBrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\JetBrains\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\CS Related\Truman-CS180-Course\lab16"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab16.dir/flags.make

CMakeFiles/lab16.dir/binary_files.cpp.obj: CMakeFiles/lab16.dir/flags.make
CMakeFiles/lab16.dir/binary_files.cpp.obj: ../binary_files.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab16.dir/binary_files.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab16.dir\binary_files.cpp.obj -c "D:\CS Related\Truman-CS180-Course\lab16\binary_files.cpp"

CMakeFiles/lab16.dir/binary_files.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab16.dir/binary_files.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\CS Related\Truman-CS180-Course\lab16\binary_files.cpp" > CMakeFiles\lab16.dir\binary_files.cpp.i

CMakeFiles/lab16.dir/binary_files.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab16.dir/binary_files.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\CS Related\Truman-CS180-Course\lab16\binary_files.cpp" -o CMakeFiles\lab16.dir\binary_files.cpp.s

# Object files for target lab16
lab16_OBJECTS = \
"CMakeFiles/lab16.dir/binary_files.cpp.obj"

# External object files for target lab16
lab16_EXTERNAL_OBJECTS =

lab16.exe: CMakeFiles/lab16.dir/binary_files.cpp.obj
lab16.exe: CMakeFiles/lab16.dir/build.make
lab16.exe: CMakeFiles/lab16.dir/linklibs.rsp
lab16.exe: CMakeFiles/lab16.dir/objects1.rsp
lab16.exe: CMakeFiles/lab16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab16.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab16.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab16.dir/build: lab16.exe

.PHONY : CMakeFiles/lab16.dir/build

CMakeFiles/lab16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab16.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab16.dir/clean

CMakeFiles/lab16.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\CS Related\Truman-CS180-Course\lab16" "D:\CS Related\Truman-CS180-Course\lab16" "D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug" "D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug" "D:\CS Related\Truman-CS180-Course\lab16\cmake-build-debug\CMakeFiles\lab16.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab16.dir/depend

