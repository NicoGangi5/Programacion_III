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
CMAKE_SOURCE_DIR = "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug"

# Include any dependencies generated for this target.
include U02_Listas/CMakeFiles/U02-E04.dir/depend.make

# Include the progress variables for this target.
include U02_Listas/CMakeFiles/U02-E04.dir/progress.make

# Include the compile flags for this target's objects.
include U02_Listas/CMakeFiles/U02-E04.dir/flags.make

U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o: U02_Listas/CMakeFiles/U02-E04.dir/flags.make
U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o: ../U02_Listas/Ej-04/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o -c "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/U02_Listas/Ej-04/main.cpp"

U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/U02-E04.dir/Ej-04/main.cpp.i"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/U02_Listas/Ej-04/main.cpp" > CMakeFiles/U02-E04.dir/Ej-04/main.cpp.i

U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/U02-E04.dir/Ej-04/main.cpp.s"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/U02_Listas/Ej-04/main.cpp" -o CMakeFiles/U02-E04.dir/Ej-04/main.cpp.s

# Object files for target U02-E04
U02__E04_OBJECTS = \
"CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o"

# External object files for target U02-E04
U02__E04_EXTERNAL_OBJECTS =

U02_Listas/U02-E04: U02_Listas/CMakeFiles/U02-E04.dir/Ej-04/main.cpp.o
U02_Listas/U02-E04: U02_Listas/CMakeFiles/U02-E04.dir/build.make
U02_Listas/U02-E04: U02_Listas/CMakeFiles/U02-E04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable U02-E04"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/U02-E04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
U02_Listas/CMakeFiles/U02-E04.dir/build: U02_Listas/U02-E04

.PHONY : U02_Listas/CMakeFiles/U02-E04.dir/build

U02_Listas/CMakeFiles/U02-E04.dir/clean:
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" && $(CMAKE_COMMAND) -P CMakeFiles/U02-E04.dir/cmake_clean.cmake
.PHONY : U02_Listas/CMakeFiles/U02-E04.dir/clean

U02_Listas/CMakeFiles/U02-E04.dir/depend:
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/U02_Listas" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/U02_Listas/CMakeFiles/U02-E04.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : U02_Listas/CMakeFiles/U02-E04.dir/depend

