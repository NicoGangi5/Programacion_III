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
CMAKE_SOURCE_DIR = "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio_1.dir/flags.make

CMakeFiles/Ejercicio_1.dir/main.cpp.o: CMakeFiles/Ejercicio_1.dir/flags.make
CMakeFiles/Ejercicio_1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio_1.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ejercicio_1.dir/main.cpp.o -c "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/main.cpp"

CMakeFiles/Ejercicio_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio_1.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/main.cpp" > CMakeFiles/Ejercicio_1.dir/main.cpp.i

CMakeFiles/Ejercicio_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio_1.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/main.cpp" -o CMakeFiles/Ejercicio_1.dir/main.cpp.s

# Object files for target Ejercicio_1
Ejercicio_1_OBJECTS = \
"CMakeFiles/Ejercicio_1.dir/main.cpp.o"

# External object files for target Ejercicio_1
Ejercicio_1_EXTERNAL_OBJECTS =

Ejercicio_1: CMakeFiles/Ejercicio_1.dir/main.cpp.o
Ejercicio_1: CMakeFiles/Ejercicio_1.dir/build.make
Ejercicio_1: CMakeFiles/Ejercicio_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ejercicio_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ejercicio_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio_1.dir/build: Ejercicio_1

.PHONY : CMakeFiles/Ejercicio_1.dir/build

CMakeFiles/Ejercicio_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ejercicio_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio_1.dir/clean

CMakeFiles/Ejercicio_1.dir/depend:
	cd "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1" "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1" "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug" "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug" "/Users/nicogangi/Documents/Facultad/Programación III/Practicos-Prog-III/Parcial 2/Ejercicio 1/cmake-build-debug/CMakeFiles/Ejercicio_1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio_1.dir/depend

