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
CMAKE_SOURCE_DIR = "/workspaces/CS 225/release-f22/cs225project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/workspaces/CS 225/release-f22/cs225project/build"

# Include any dependencies generated for this target.
include src/CMakeFiles/src.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/src.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src.dir/flags.make

src/CMakeFiles/src.dir/edge.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/edge.cpp.o: ../src/edge.cpp
src/CMakeFiles/src.dir/edge.cpp.o: src/CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225/release-f22/cs225project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src.dir/edge.cpp.o"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/src.dir/edge.cpp.o -MF CMakeFiles/src.dir/edge.cpp.o.d -o CMakeFiles/src.dir/edge.cpp.o -c "/workspaces/CS 225/release-f22/cs225project/src/edge.cpp"

src/CMakeFiles/src.dir/edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/edge.cpp.i"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225/release-f22/cs225project/src/edge.cpp" > CMakeFiles/src.dir/edge.cpp.i

src/CMakeFiles/src.dir/edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/edge.cpp.s"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225/release-f22/cs225project/src/edge.cpp" -o CMakeFiles/src.dir/edge.cpp.s

src/CMakeFiles/src.dir/graph.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/graph.cpp.o: ../src/graph.cpp
src/CMakeFiles/src.dir/graph.cpp.o: src/CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225/release-f22/cs225project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/src.dir/graph.cpp.o"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/src.dir/graph.cpp.o -MF CMakeFiles/src.dir/graph.cpp.o.d -o CMakeFiles/src.dir/graph.cpp.o -c "/workspaces/CS 225/release-f22/cs225project/src/graph.cpp"

src/CMakeFiles/src.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/graph.cpp.i"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225/release-f22/cs225project/src/graph.cpp" > CMakeFiles/src.dir/graph.cpp.i

src/CMakeFiles/src.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/graph.cpp.s"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225/release-f22/cs225project/src/graph.cpp" -o CMakeFiles/src.dir/graph.cpp.s

src/CMakeFiles/src.dir/main.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/src.dir/main.cpp.o: src/CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225/release-f22/cs225project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/src.dir/main.cpp.o"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/src.dir/main.cpp.o -MF CMakeFiles/src.dir/main.cpp.o.d -o CMakeFiles/src.dir/main.cpp.o -c "/workspaces/CS 225/release-f22/cs225project/src/main.cpp"

src/CMakeFiles/src.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/main.cpp.i"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225/release-f22/cs225project/src/main.cpp" > CMakeFiles/src.dir/main.cpp.i

src/CMakeFiles/src.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/main.cpp.s"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225/release-f22/cs225project/src/main.cpp" -o CMakeFiles/src.dir/main.cpp.s

src/CMakeFiles/src.dir/node.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/node.cpp.o: ../src/node.cpp
src/CMakeFiles/src.dir/node.cpp.o: src/CMakeFiles/src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225/release-f22/cs225project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/src.dir/node.cpp.o"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/src.dir/node.cpp.o -MF CMakeFiles/src.dir/node.cpp.o.d -o CMakeFiles/src.dir/node.cpp.o -c "/workspaces/CS 225/release-f22/cs225project/src/node.cpp"

src/CMakeFiles/src.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/node.cpp.i"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225/release-f22/cs225project/src/node.cpp" > CMakeFiles/src.dir/node.cpp.i

src/CMakeFiles/src.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/node.cpp.s"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225/release-f22/cs225project/src/node.cpp" -o CMakeFiles/src.dir/node.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/edge.cpp.o" \
"CMakeFiles/src.dir/graph.cpp.o" \
"CMakeFiles/src.dir/main.cpp.o" \
"CMakeFiles/src.dir/node.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

src/libsrc.a: src/CMakeFiles/src.dir/edge.cpp.o
src/libsrc.a: src/CMakeFiles/src.dir/graph.cpp.o
src/libsrc.a: src/CMakeFiles/src.dir/main.cpp.o
src/libsrc.a: src/CMakeFiles/src.dir/node.cpp.o
src/libsrc.a: src/CMakeFiles/src.dir/build.make
src/libsrc.a: src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/workspaces/CS 225/release-f22/cs225project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libsrc.a"
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean_target.cmake
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src.dir/build: src/libsrc.a
.PHONY : src/CMakeFiles/src.dir/build

src/CMakeFiles/src.dir/clean:
	cd "/workspaces/CS 225/release-f22/cs225project/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/src.dir/clean

src/CMakeFiles/src.dir/depend:
	cd "/workspaces/CS 225/release-f22/cs225project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/workspaces/CS 225/release-f22/cs225project" "/workspaces/CS 225/release-f22/cs225project/src" "/workspaces/CS 225/release-f22/cs225project/build" "/workspaces/CS 225/release-f22/cs225project/build/src" "/workspaces/CS 225/release-f22/cs225project/build/src/CMakeFiles/src.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/src.dir/depend
