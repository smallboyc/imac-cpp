# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\imac-cpp\td09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\imac-cpp\td09\build

# Include any dependencies generated for this target.
include CMakeFiles/exo02.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exo02.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exo02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exo02.dir/flags.make

CMakeFiles/exo02.dir/src/exo02.cpp.obj: CMakeFiles/exo02.dir/flags.make
CMakeFiles/exo02.dir/src/exo02.cpp.obj: D:/imac-cpp/td09/src/exo02.cpp
CMakeFiles/exo02.dir/src/exo02.cpp.obj: CMakeFiles/exo02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\imac-cpp\td09\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exo02.dir/src/exo02.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exo02.dir/src/exo02.cpp.obj -MF CMakeFiles\exo02.dir\src\exo02.cpp.obj.d -o CMakeFiles\exo02.dir\src\exo02.cpp.obj -c D:\imac-cpp\td09\src\exo02.cpp

CMakeFiles/exo02.dir/src/exo02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exo02.dir/src/exo02.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\imac-cpp\td09\src\exo02.cpp > CMakeFiles\exo02.dir\src\exo02.cpp.i

CMakeFiles/exo02.dir/src/exo02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exo02.dir/src/exo02.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\imac-cpp\td09\src\exo02.cpp -o CMakeFiles\exo02.dir\src\exo02.cpp.s

# Object files for target exo02
exo02_OBJECTS = \
"CMakeFiles/exo02.dir/src/exo02.cpp.obj"

# External object files for target exo02
exo02_EXTERNAL_OBJECTS =

exo02.exe: CMakeFiles/exo02.dir/src/exo02.cpp.obj
exo02.exe: CMakeFiles/exo02.dir/build.make
exo02.exe: CMakeFiles/exo02.dir/linkLibs.rsp
exo02.exe: CMakeFiles/exo02.dir/objects1.rsp
exo02.exe: CMakeFiles/exo02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\imac-cpp\td09\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exo02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exo02.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exo02.dir/build: exo02.exe
.PHONY : CMakeFiles/exo02.dir/build

CMakeFiles/exo02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exo02.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exo02.dir/clean

CMakeFiles/exo02.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\imac-cpp\td09 D:\imac-cpp\td09 D:\imac-cpp\td09\build D:\imac-cpp\td09\build D:\imac-cpp\td09\build\CMakeFiles\exo02.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exo02.dir/depend

