# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/xenoth/.clion-2016.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/xenoth/.clion-2016.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xenoth/git/my_git/SystemMap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xenoth/git/my_git/SystemMap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/systemMap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/systemMap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/systemMap.dir/flags.make

CMakeFiles/systemMap.dir/src/Engine.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/Engine.cpp.o: ../src/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/systemMap.dir/src/Engine.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/Engine.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/Engine.cpp

CMakeFiles/systemMap.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/Engine.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/Engine.cpp > CMakeFiles/systemMap.dir/src/Engine.cpp.i

CMakeFiles/systemMap.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/Engine.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/Engine.cpp -o CMakeFiles/systemMap.dir/src/Engine.cpp.s

CMakeFiles/systemMap.dir/src/Engine.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/Engine.cpp.o.requires

CMakeFiles/systemMap.dir/src/Engine.cpp.o.provides: CMakeFiles/systemMap.dir/src/Engine.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/Engine.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/Engine.cpp.o.provides

CMakeFiles/systemMap.dir/src/Engine.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/Engine.cpp.o


CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o: ../src/GraphicalEntity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/GraphicalEntity.cpp

CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/GraphicalEntity.cpp > CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.i

CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/GraphicalEntity.cpp -o CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.s

CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.requires

CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.provides: CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.provides

CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o


CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o: ../src/Math4Orbits.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/Math4Orbits.cpp

CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/Math4Orbits.cpp > CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.i

CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/Math4Orbits.cpp -o CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.s

CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.requires

CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.provides: CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.provides

CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o


CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o: ../src/PhysicEntity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/PhysicEntity.cpp

CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/PhysicEntity.cpp > CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.i

CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/PhysicEntity.cpp -o CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.s

CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.requires

CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.provides: CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.provides

CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o


CMakeFiles/systemMap.dir/src/StellarBody.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/StellarBody.cpp.o: ../src/StellarBody.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/systemMap.dir/src/StellarBody.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/StellarBody.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/StellarBody.cpp

CMakeFiles/systemMap.dir/src/StellarBody.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/StellarBody.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/StellarBody.cpp > CMakeFiles/systemMap.dir/src/StellarBody.cpp.i

CMakeFiles/systemMap.dir/src/StellarBody.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/StellarBody.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/StellarBody.cpp -o CMakeFiles/systemMap.dir/src/StellarBody.cpp.s

CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.requires

CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.provides: CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.provides

CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/StellarBody.cpp.o


CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o: ../src/StellarSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/StellarSystem.cpp

CMakeFiles/systemMap.dir/src/StellarSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/StellarSystem.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/StellarSystem.cpp > CMakeFiles/systemMap.dir/src/StellarSystem.cpp.i

CMakeFiles/systemMap.dir/src/StellarSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/StellarSystem.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/StellarSystem.cpp -o CMakeFiles/systemMap.dir/src/StellarSystem.cpp.s

CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.requires

CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.provides: CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.provides

CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o


CMakeFiles/systemMap.dir/src/main.cpp.o: CMakeFiles/systemMap.dir/flags.make
CMakeFiles/systemMap.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/systemMap.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/systemMap.dir/src/main.cpp.o -c /home/xenoth/git/my_git/SystemMap/src/main.cpp

CMakeFiles/systemMap.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systemMap.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xenoth/git/my_git/SystemMap/src/main.cpp > CMakeFiles/systemMap.dir/src/main.cpp.i

CMakeFiles/systemMap.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systemMap.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xenoth/git/my_git/SystemMap/src/main.cpp -o CMakeFiles/systemMap.dir/src/main.cpp.s

CMakeFiles/systemMap.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/systemMap.dir/src/main.cpp.o.requires

CMakeFiles/systemMap.dir/src/main.cpp.o.provides: CMakeFiles/systemMap.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/systemMap.dir/build.make CMakeFiles/systemMap.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/systemMap.dir/src/main.cpp.o.provides

CMakeFiles/systemMap.dir/src/main.cpp.o.provides.build: CMakeFiles/systemMap.dir/src/main.cpp.o


# Object files for target systemMap
systemMap_OBJECTS = \
"CMakeFiles/systemMap.dir/src/Engine.cpp.o" \
"CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o" \
"CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o" \
"CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o" \
"CMakeFiles/systemMap.dir/src/StellarBody.cpp.o" \
"CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o" \
"CMakeFiles/systemMap.dir/src/main.cpp.o"

# External object files for target systemMap
systemMap_EXTERNAL_OBJECTS =

systemMap: CMakeFiles/systemMap.dir/src/Engine.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/StellarBody.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o
systemMap: CMakeFiles/systemMap.dir/src/main.cpp.o
systemMap: CMakeFiles/systemMap.dir/build.make
systemMap: /usr/local/lib/libsfml-system.so
systemMap: /usr/local/lib/libsfml-window.so
systemMap: /usr/local/lib/libsfml-graphics.so
systemMap: /usr/local/lib/libsfml-network.so
systemMap: /usr/local/lib/libsfml-audio.so
systemMap: CMakeFiles/systemMap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable systemMap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/systemMap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/systemMap.dir/build: systemMap

.PHONY : CMakeFiles/systemMap.dir/build

CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/Engine.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/GraphicalEntity.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/Math4Orbits.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/PhysicEntity.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/StellarBody.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/StellarSystem.cpp.o.requires
CMakeFiles/systemMap.dir/requires: CMakeFiles/systemMap.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/systemMap.dir/requires

CMakeFiles/systemMap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/systemMap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/systemMap.dir/clean

CMakeFiles/systemMap.dir/depend:
	cd /home/xenoth/git/my_git/SystemMap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xenoth/git/my_git/SystemMap /home/xenoth/git/my_git/SystemMap /home/xenoth/git/my_git/SystemMap/cmake-build-debug /home/xenoth/git/my_git/SystemMap/cmake-build-debug /home/xenoth/git/my_git/SystemMap/cmake-build-debug/CMakeFiles/systemMap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/systemMap.dir/depend

