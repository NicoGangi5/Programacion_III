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
include test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/flags.make

test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.o: test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/flags.make
test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.o: ../test/lib/gtest-1.8.1/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/test/lib/gtest-1.8.1/src/gtest-all.cc"

test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/test/lib/gtest-1.8.1/src/gtest-all.cc" > CMakeFiles/gtest.dir/src/gtest-all.cc.i

test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/test/lib/gtest-1.8.1/src/gtest-all.cc" -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

test/lib/gtest-1.8.1/libgtestd.a: test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/src/gtest-all.cc.o
test/lib/gtest-1.8.1/libgtestd.a: test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/build.make
test/lib/gtest-1.8.1/libgtestd.a: test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtestd.a"
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/build: test/lib/gtest-1.8.1/libgtestd.a

.PHONY : test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/build

test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/clean:
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/clean

test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/depend:
	cd "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/test/lib/gtest-1.8.1" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1" "/Users/nicogangi/Documents/Facultad/Programación III/ejercicios-2018-NicoGangi5/cmake-build-debug/test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : test/lib/gtest-1.8.1/CMakeFiles/gtest.dir/depend

