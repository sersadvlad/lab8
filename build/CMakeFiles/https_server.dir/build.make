# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sersadvlad/localrepo/progbase2/labs/lab8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sersadvlad/localrepo/progbase2/labs/lab8/build

# Include any dependencies generated for this target.
include CMakeFiles/https_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/https_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/https_server.dir/flags.make

CMakeFiles/https_server.dir/main.cpp.o: CMakeFiles/https_server.dir/flags.make
CMakeFiles/https_server.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/https_server.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/https_server.dir/main.cpp.o -c /home/sersadvlad/localrepo/progbase2/labs/lab8/main.cpp

CMakeFiles/https_server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/https_server.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sersadvlad/localrepo/progbase2/labs/lab8/main.cpp > CMakeFiles/https_server.dir/main.cpp.i

CMakeFiles/https_server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/https_server.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sersadvlad/localrepo/progbase2/labs/lab8/main.cpp -o CMakeFiles/https_server.dir/main.cpp.s

CMakeFiles/https_server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/https_server.dir/main.cpp.o.requires

CMakeFiles/https_server.dir/main.cpp.o.provides: CMakeFiles/https_server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/https_server.dir/build.make CMakeFiles/https_server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/https_server.dir/main.cpp.o.provides

CMakeFiles/https_server.dir/main.cpp.o.provides.build: CMakeFiles/https_server.dir/main.cpp.o


CMakeFiles/https_server.dir/src/request.cpp.o: CMakeFiles/https_server.dir/flags.make
CMakeFiles/https_server.dir/src/request.cpp.o: ../src/request.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/https_server.dir/src/request.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/https_server.dir/src/request.cpp.o -c /home/sersadvlad/localrepo/progbase2/labs/lab8/src/request.cpp

CMakeFiles/https_server.dir/src/request.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/https_server.dir/src/request.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sersadvlad/localrepo/progbase2/labs/lab8/src/request.cpp > CMakeFiles/https_server.dir/src/request.cpp.i

CMakeFiles/https_server.dir/src/request.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/https_server.dir/src/request.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sersadvlad/localrepo/progbase2/labs/lab8/src/request.cpp -o CMakeFiles/https_server.dir/src/request.cpp.s

CMakeFiles/https_server.dir/src/request.cpp.o.requires:

.PHONY : CMakeFiles/https_server.dir/src/request.cpp.o.requires

CMakeFiles/https_server.dir/src/request.cpp.o.provides: CMakeFiles/https_server.dir/src/request.cpp.o.requires
	$(MAKE) -f CMakeFiles/https_server.dir/build.make CMakeFiles/https_server.dir/src/request.cpp.o.provides.build
.PHONY : CMakeFiles/https_server.dir/src/request.cpp.o.provides

CMakeFiles/https_server.dir/src/request.cpp.o.provides.build: CMakeFiles/https_server.dir/src/request.cpp.o


CMakeFiles/https_server.dir/src/director.cpp.o: CMakeFiles/https_server.dir/flags.make
CMakeFiles/https_server.dir/src/director.cpp.o: ../src/director.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/https_server.dir/src/director.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/https_server.dir/src/director.cpp.o -c /home/sersadvlad/localrepo/progbase2/labs/lab8/src/director.cpp

CMakeFiles/https_server.dir/src/director.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/https_server.dir/src/director.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sersadvlad/localrepo/progbase2/labs/lab8/src/director.cpp > CMakeFiles/https_server.dir/src/director.cpp.i

CMakeFiles/https_server.dir/src/director.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/https_server.dir/src/director.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sersadvlad/localrepo/progbase2/labs/lab8/src/director.cpp -o CMakeFiles/https_server.dir/src/director.cpp.s

CMakeFiles/https_server.dir/src/director.cpp.o.requires:

.PHONY : CMakeFiles/https_server.dir/src/director.cpp.o.requires

CMakeFiles/https_server.dir/src/director.cpp.o.provides: CMakeFiles/https_server.dir/src/director.cpp.o.requires
	$(MAKE) -f CMakeFiles/https_server.dir/build.make CMakeFiles/https_server.dir/src/director.cpp.o.provides.build
.PHONY : CMakeFiles/https_server.dir/src/director.cpp.o.provides

CMakeFiles/https_server.dir/src/director.cpp.o.provides.build: CMakeFiles/https_server.dir/src/director.cpp.o


CMakeFiles/https_server.dir/src/response.cpp.o: CMakeFiles/https_server.dir/flags.make
CMakeFiles/https_server.dir/src/response.cpp.o: ../src/response.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/https_server.dir/src/response.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/https_server.dir/src/response.cpp.o -c /home/sersadvlad/localrepo/progbase2/labs/lab8/src/response.cpp

CMakeFiles/https_server.dir/src/response.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/https_server.dir/src/response.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sersadvlad/localrepo/progbase2/labs/lab8/src/response.cpp > CMakeFiles/https_server.dir/src/response.cpp.i

CMakeFiles/https_server.dir/src/response.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/https_server.dir/src/response.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sersadvlad/localrepo/progbase2/labs/lab8/src/response.cpp -o CMakeFiles/https_server.dir/src/response.cpp.s

CMakeFiles/https_server.dir/src/response.cpp.o.requires:

.PHONY : CMakeFiles/https_server.dir/src/response.cpp.o.requires

CMakeFiles/https_server.dir/src/response.cpp.o.provides: CMakeFiles/https_server.dir/src/response.cpp.o.requires
	$(MAKE) -f CMakeFiles/https_server.dir/build.make CMakeFiles/https_server.dir/src/response.cpp.o.provides.build
.PHONY : CMakeFiles/https_server.dir/src/response.cpp.o.provides

CMakeFiles/https_server.dir/src/response.cpp.o.provides.build: CMakeFiles/https_server.dir/src/response.cpp.o


CMakeFiles/https_server.dir/src/convert.cpp.o: CMakeFiles/https_server.dir/flags.make
CMakeFiles/https_server.dir/src/convert.cpp.o: ../src/convert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/https_server.dir/src/convert.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/https_server.dir/src/convert.cpp.o -c /home/sersadvlad/localrepo/progbase2/labs/lab8/src/convert.cpp

CMakeFiles/https_server.dir/src/convert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/https_server.dir/src/convert.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sersadvlad/localrepo/progbase2/labs/lab8/src/convert.cpp > CMakeFiles/https_server.dir/src/convert.cpp.i

CMakeFiles/https_server.dir/src/convert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/https_server.dir/src/convert.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sersadvlad/localrepo/progbase2/labs/lab8/src/convert.cpp -o CMakeFiles/https_server.dir/src/convert.cpp.s

CMakeFiles/https_server.dir/src/convert.cpp.o.requires:

.PHONY : CMakeFiles/https_server.dir/src/convert.cpp.o.requires

CMakeFiles/https_server.dir/src/convert.cpp.o.provides: CMakeFiles/https_server.dir/src/convert.cpp.o.requires
	$(MAKE) -f CMakeFiles/https_server.dir/build.make CMakeFiles/https_server.dir/src/convert.cpp.o.provides.build
.PHONY : CMakeFiles/https_server.dir/src/convert.cpp.o.provides

CMakeFiles/https_server.dir/src/convert.cpp.o.provides.build: CMakeFiles/https_server.dir/src/convert.cpp.o


# Object files for target https_server
https_server_OBJECTS = \
"CMakeFiles/https_server.dir/main.cpp.o" \
"CMakeFiles/https_server.dir/src/request.cpp.o" \
"CMakeFiles/https_server.dir/src/director.cpp.o" \
"CMakeFiles/https_server.dir/src/response.cpp.o" \
"CMakeFiles/https_server.dir/src/convert.cpp.o"

# External object files for target https_server
https_server_EXTERNAL_OBJECTS =

https_server: CMakeFiles/https_server.dir/main.cpp.o
https_server: CMakeFiles/https_server.dir/src/request.cpp.o
https_server: CMakeFiles/https_server.dir/src/director.cpp.o
https_server: CMakeFiles/https_server.dir/src/response.cpp.o
https_server: CMakeFiles/https_server.dir/src/convert.cpp.o
https_server: CMakeFiles/https_server.dir/build.make
https_server: CMakeFiles/https_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable https_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/https_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/https_server.dir/build: https_server

.PHONY : CMakeFiles/https_server.dir/build

CMakeFiles/https_server.dir/requires: CMakeFiles/https_server.dir/main.cpp.o.requires
CMakeFiles/https_server.dir/requires: CMakeFiles/https_server.dir/src/request.cpp.o.requires
CMakeFiles/https_server.dir/requires: CMakeFiles/https_server.dir/src/director.cpp.o.requires
CMakeFiles/https_server.dir/requires: CMakeFiles/https_server.dir/src/response.cpp.o.requires
CMakeFiles/https_server.dir/requires: CMakeFiles/https_server.dir/src/convert.cpp.o.requires

.PHONY : CMakeFiles/https_server.dir/requires

CMakeFiles/https_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/https_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/https_server.dir/clean

CMakeFiles/https_server.dir/depend:
	cd /home/sersadvlad/localrepo/progbase2/labs/lab8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sersadvlad/localrepo/progbase2/labs/lab8 /home/sersadvlad/localrepo/progbase2/labs/lab8 /home/sersadvlad/localrepo/progbase2/labs/lab8/build /home/sersadvlad/localrepo/progbase2/labs/lab8/build /home/sersadvlad/localrepo/progbase2/labs/lab8/build/CMakeFiles/https_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/https_server.dir/depend

