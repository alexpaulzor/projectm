# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/apaul/src/projectm/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/apaul/src/projectm/src

# Include any dependencies generated for this target.
include NativePresets/CMakeFiles/RovastarDriftingChaos.dir/depend.make

# Include the progress variables for this target.
include NativePresets/CMakeFiles/RovastarDriftingChaos.dir/progress.make

# Include the compile flags for this target's objects.
include NativePresets/CMakeFiles/RovastarDriftingChaos.dir/flags.make

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/flags.make
NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o: NativePresets/RovastarDriftingChaos.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/apaul/src/projectm/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o"
	cd /home/apaul/src/projectm/src/NativePresets && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o -c /home/apaul/src/projectm/src/NativePresets/RovastarDriftingChaos.cpp

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.i"
	cd /home/apaul/src/projectm/src/NativePresets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/apaul/src/projectm/src/NativePresets/RovastarDriftingChaos.cpp > CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.i

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.s"
	cd /home/apaul/src/projectm/src/NativePresets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/apaul/src/projectm/src/NativePresets/RovastarDriftingChaos.cpp -o CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.s

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.requires:
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.requires

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.provides: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.requires
	$(MAKE) -f NativePresets/CMakeFiles/RovastarDriftingChaos.dir/build.make NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.provides.build
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.provides

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.provides.build: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o

# Object files for target RovastarDriftingChaos
RovastarDriftingChaos_OBJECTS = \
"CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o"

# External object files for target RovastarDriftingChaos
RovastarDriftingChaos_EXTERNAL_OBJECTS =

NativePresets/libRovastarDriftingChaos.so: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o
NativePresets/libRovastarDriftingChaos.so: libprojectM/Renderer/libRenderer.a
NativePresets/libRovastarDriftingChaos.so: libprojectM/NativePresetFactory/libNativePresetFactory.a
NativePresets/libRovastarDriftingChaos.so: libprojectM/libprojectM.so.2.00
NativePresets/libRovastarDriftingChaos.so: libprojectM/NativePresetFactory/libNativePresetFactory.a
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libGLU.so
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libGL.so
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libSM.so
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libICE.so
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libX11.so
NativePresets/libRovastarDriftingChaos.so: /usr/lib/libXext.so
NativePresets/libRovastarDriftingChaos.so: libprojectM/MilkdropPresetFactory/libMilkdropPresetFactory.a
NativePresets/libRovastarDriftingChaos.so: libprojectM/Renderer/libRenderer.a
NativePresets/libRovastarDriftingChaos.so: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/build.make
NativePresets/libRovastarDriftingChaos.so: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libRovastarDriftingChaos.so"
	cd /home/apaul/src/projectm/src/NativePresets && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RovastarDriftingChaos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
NativePresets/CMakeFiles/RovastarDriftingChaos.dir/build: NativePresets/libRovastarDriftingChaos.so
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/build

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/requires: NativePresets/CMakeFiles/RovastarDriftingChaos.dir/RovastarDriftingChaos.o.requires
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/requires

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/clean:
	cd /home/apaul/src/projectm/src/NativePresets && $(CMAKE_COMMAND) -P CMakeFiles/RovastarDriftingChaos.dir/cmake_clean.cmake
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/clean

NativePresets/CMakeFiles/RovastarDriftingChaos.dir/depend:
	cd /home/apaul/src/projectm/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apaul/src/projectm/src /home/apaul/src/projectm/src/NativePresets /home/apaul/src/projectm/src /home/apaul/src/projectm/src/NativePresets /home/apaul/src/projectm/src/NativePresets/CMakeFiles/RovastarDriftingChaos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : NativePresets/CMakeFiles/RovastarDriftingChaos.dir/depend

