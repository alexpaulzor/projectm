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
include projectM-test/CMakeFiles/projectM-test-texture.dir/depend.make

# Include the progress variables for this target.
include projectM-test/CMakeFiles/projectM-test-texture.dir/progress.make

# Include the compile flags for this target's objects.
include projectM-test/CMakeFiles/projectM-test-texture.dir/flags.make

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o: projectM-test/CMakeFiles/projectM-test-texture.dir/flags.make
projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o: projectM-test/projectM-test-texture.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/apaul/src/projectm/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o -c /home/apaul/src/projectm/src/projectM-test/projectM-test-texture.cpp

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectM-test-texture.dir/projectM-test-texture.i"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/apaul/src/projectm/src/projectM-test/projectM-test-texture.cpp > CMakeFiles/projectM-test-texture.dir/projectM-test-texture.i

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectM-test-texture.dir/projectM-test-texture.s"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/apaul/src/projectm/src/projectM-test/projectM-test-texture.cpp -o CMakeFiles/projectM-test-texture.dir/projectM-test-texture.s

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.requires:
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.requires

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.provides: projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.requires
	$(MAKE) -f projectM-test/CMakeFiles/projectM-test-texture.dir/build.make projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.provides.build
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.provides

projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.provides.build: projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o: projectM-test/CMakeFiles/projectM-test-texture.dir/flags.make
projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o: projectM-test/video_init.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/apaul/src/projectm/src/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/projectM-test-texture.dir/video_init.o -c /home/apaul/src/projectm/src/projectM-test/video_init.cpp

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectM-test-texture.dir/video_init.i"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/apaul/src/projectm/src/projectM-test/video_init.cpp > CMakeFiles/projectM-test-texture.dir/video_init.i

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectM-test-texture.dir/video_init.s"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/apaul/src/projectm/src/projectM-test/video_init.cpp -o CMakeFiles/projectM-test-texture.dir/video_init.s

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.requires:
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.requires

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.provides: projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.requires
	$(MAKE) -f projectM-test/CMakeFiles/projectM-test-texture.dir/build.make projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.provides.build
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.provides

projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.provides.build: projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o: projectM-test/CMakeFiles/projectM-test-texture.dir/flags.make
projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o: projectM-test/ConfigFile.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/apaul/src/projectm/src/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/projectM-test-texture.dir/ConfigFile.o -c /home/apaul/src/projectm/src/projectM-test/ConfigFile.cpp

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectM-test-texture.dir/ConfigFile.i"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/apaul/src/projectm/src/projectM-test/ConfigFile.cpp > CMakeFiles/projectM-test-texture.dir/ConfigFile.i

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectM-test-texture.dir/ConfigFile.s"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/apaul/src/projectm/src/projectM-test/ConfigFile.cpp -o CMakeFiles/projectM-test-texture.dir/ConfigFile.s

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.requires:
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.requires

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.provides: projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.requires
	$(MAKE) -f projectM-test/CMakeFiles/projectM-test-texture.dir/build.make projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.provides.build
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.provides

projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.provides.build: projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o: projectM-test/CMakeFiles/projectM-test-texture.dir/flags.make
projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o: projectM-test/getConfigFilename.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/apaul/src/projectm/src/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/projectM-test-texture.dir/getConfigFilename.o -c /home/apaul/src/projectm/src/projectM-test/getConfigFilename.cpp

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectM-test-texture.dir/getConfigFilename.i"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/apaul/src/projectm/src/projectM-test/getConfigFilename.cpp > CMakeFiles/projectM-test-texture.dir/getConfigFilename.i

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectM-test-texture.dir/getConfigFilename.s"
	cd /home/apaul/src/projectm/src/projectM-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/apaul/src/projectm/src/projectM-test/getConfigFilename.cpp -o CMakeFiles/projectM-test-texture.dir/getConfigFilename.s

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.requires:
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.requires

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.provides: projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.requires
	$(MAKE) -f projectM-test/CMakeFiles/projectM-test-texture.dir/build.make projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.provides.build
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.provides

projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.provides.build: projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o

# Object files for target projectM-test-texture
projectM__test__texture_OBJECTS = \
"CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o" \
"CMakeFiles/projectM-test-texture.dir/video_init.o" \
"CMakeFiles/projectM-test-texture.dir/ConfigFile.o" \
"CMakeFiles/projectM-test-texture.dir/getConfigFilename.o"

# External object files for target projectM-test-texture
projectM__test__texture_EXTERNAL_OBJECTS =

projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o
projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o
projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o
projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o
projectM-test/projectM-test-texture: libprojectM/libprojectM.so.2.00
projectM-test/projectM-test-texture: /usr/lib/libSDLmain.a
projectM-test/projectM-test-texture: /usr/lib/libSDL.so
projectM-test/projectM-test-texture: /usr/lib/libGLU.so
projectM-test/projectM-test-texture: /usr/lib/libGL.so
projectM-test/projectM-test-texture: /usr/lib/libSM.so
projectM-test/projectM-test-texture: /usr/lib/libICE.so
projectM-test/projectM-test-texture: /usr/lib/libX11.so
projectM-test/projectM-test-texture: /usr/lib/libXext.so
projectM-test/projectM-test-texture: libprojectM/NativePresetFactory/libNativePresetFactory.a
projectM-test/projectM-test-texture: libprojectM/MilkdropPresetFactory/libMilkdropPresetFactory.a
projectM-test/projectM-test-texture: libprojectM/Renderer/libRenderer.a
projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/build.make
projectM-test/projectM-test-texture: projectM-test/CMakeFiles/projectM-test-texture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable projectM-test-texture"
	cd /home/apaul/src/projectm/src/projectM-test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/projectM-test-texture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
projectM-test/CMakeFiles/projectM-test-texture.dir/build: projectM-test/projectM-test-texture
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/build

projectM-test/CMakeFiles/projectM-test-texture.dir/requires: projectM-test/CMakeFiles/projectM-test-texture.dir/projectM-test-texture.o.requires
projectM-test/CMakeFiles/projectM-test-texture.dir/requires: projectM-test/CMakeFiles/projectM-test-texture.dir/video_init.o.requires
projectM-test/CMakeFiles/projectM-test-texture.dir/requires: projectM-test/CMakeFiles/projectM-test-texture.dir/ConfigFile.o.requires
projectM-test/CMakeFiles/projectM-test-texture.dir/requires: projectM-test/CMakeFiles/projectM-test-texture.dir/getConfigFilename.o.requires
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/requires

projectM-test/CMakeFiles/projectM-test-texture.dir/clean:
	cd /home/apaul/src/projectm/src/projectM-test && $(CMAKE_COMMAND) -P CMakeFiles/projectM-test-texture.dir/cmake_clean.cmake
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/clean

projectM-test/CMakeFiles/projectM-test-texture.dir/depend:
	cd /home/apaul/src/projectm/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apaul/src/projectm/src /home/apaul/src/projectm/src/projectM-test /home/apaul/src/projectm/src /home/apaul/src/projectm/src/projectM-test /home/apaul/src/projectm/src/projectM-test/CMakeFiles/projectM-test-texture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projectM-test/CMakeFiles/projectM-test-texture.dir/depend

