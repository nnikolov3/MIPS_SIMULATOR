# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nik/development/MIPS_SIMULATOR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nik/development/MIPS_SIMULATOR/build

# Include any dependencies generated for this target.
include CMakeFiles/MIPS_SIMULATOR.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MIPS_SIMULATOR.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MIPS_SIMULATOR.dir/flags.make

CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o: CMakeFiles/MIPS_SIMULATOR.dir/flags.make
CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o: ../src/tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nik/development/MIPS_SIMULATOR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o   -c /home/nik/development/MIPS_SIMULATOR/src/tools.c

CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nik/development/MIPS_SIMULATOR/src/tools.c > CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.i

CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nik/development/MIPS_SIMULATOR/src/tools.c -o CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.s

CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o: CMakeFiles/MIPS_SIMULATOR.dir/flags.make
CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nik/development/MIPS_SIMULATOR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o   -c /home/nik/development/MIPS_SIMULATOR/src/main.c

CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nik/development/MIPS_SIMULATOR/src/main.c > CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.i

CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nik/development/MIPS_SIMULATOR/src/main.c -o CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.s

CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o: CMakeFiles/MIPS_SIMULATOR.dir/flags.make
CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o: ../src/instruction_fetch.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nik/development/MIPS_SIMULATOR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o   -c /home/nik/development/MIPS_SIMULATOR/src/instruction_fetch.c

CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nik/development/MIPS_SIMULATOR/src/instruction_fetch.c > CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.i

CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nik/development/MIPS_SIMULATOR/src/instruction_fetch.c -o CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.s

CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o: CMakeFiles/MIPS_SIMULATOR.dir/flags.make
CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o: ../src/pipeline.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nik/development/MIPS_SIMULATOR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o   -c /home/nik/development/MIPS_SIMULATOR/src/pipeline.c

CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nik/development/MIPS_SIMULATOR/src/pipeline.c > CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.i

CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nik/development/MIPS_SIMULATOR/src/pipeline.c -o CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.s

# Object files for target MIPS_SIMULATOR
MIPS_SIMULATOR_OBJECTS = \
"CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o" \
"CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o" \
"CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o" \
"CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o"

# External object files for target MIPS_SIMULATOR
MIPS_SIMULATOR_EXTERNAL_OBJECTS =

MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/src/tools.c.o
MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/src/main.c.o
MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/src/instruction_fetch.c.o
MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/src/pipeline.c.o
MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/build.make
MIPS_SIMULATOR: CMakeFiles/MIPS_SIMULATOR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nik/development/MIPS_SIMULATOR/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable MIPS_SIMULATOR"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MIPS_SIMULATOR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MIPS_SIMULATOR.dir/build: MIPS_SIMULATOR

.PHONY : CMakeFiles/MIPS_SIMULATOR.dir/build

CMakeFiles/MIPS_SIMULATOR.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MIPS_SIMULATOR.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MIPS_SIMULATOR.dir/clean

CMakeFiles/MIPS_SIMULATOR.dir/depend:
	cd /home/nik/development/MIPS_SIMULATOR/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nik/development/MIPS_SIMULATOR /home/nik/development/MIPS_SIMULATOR /home/nik/development/MIPS_SIMULATOR/build /home/nik/development/MIPS_SIMULATOR/build /home/nik/development/MIPS_SIMULATOR/build/CMakeFiles/MIPS_SIMULATOR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MIPS_SIMULATOR.dir/depend

