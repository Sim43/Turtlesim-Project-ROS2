# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/zero/turtlesim_project/src/custom_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zero/turtlesim_project/build/custom_interfaces

# Utility rule file for custom_interfaces__rosidl_generator_type_description.

# Include any custom commands dependencies for this target.
include CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/progress.make

CMakeFiles/custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/msg/Turtle.json
CMakeFiles/custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/msg/TurtleArray.json
CMakeFiles/custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/srv/CatchTurtle.json

rosidl_generator_type_description/custom_interfaces/msg/Turtle.json: /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description
rosidl_generator_type_description/custom_interfaces/msg/Turtle.json: /opt/ros/jazzy/lib/python3.12/site-packages/rosidl_generator_type_description/__init__.py
rosidl_generator_type_description/custom_interfaces/msg/Turtle.json: rosidl_adapter/custom_interfaces/msg/Turtle.idl
rosidl_generator_type_description/custom_interfaces/msg/Turtle.json: rosidl_adapter/custom_interfaces/msg/TurtleArray.idl
rosidl_generator_type_description/custom_interfaces/msg/Turtle.json: rosidl_adapter/custom_interfaces/srv/CatchTurtle.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/zero/turtlesim_project/build/custom_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating type hashes for ROS interfaces"
	/usr/bin/python3 /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description --generator-arguments-file /home/zero/turtlesim_project/build/custom_interfaces/rosidl_generator_type_description__arguments.json

rosidl_generator_type_description/custom_interfaces/msg/TurtleArray.json: rosidl_generator_type_description/custom_interfaces/msg/Turtle.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/custom_interfaces/msg/TurtleArray.json

rosidl_generator_type_description/custom_interfaces/srv/CatchTurtle.json: rosidl_generator_type_description/custom_interfaces/msg/Turtle.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/custom_interfaces/srv/CatchTurtle.json

custom_interfaces__rosidl_generator_type_description: CMakeFiles/custom_interfaces__rosidl_generator_type_description
custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/msg/Turtle.json
custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/msg/TurtleArray.json
custom_interfaces__rosidl_generator_type_description: rosidl_generator_type_description/custom_interfaces/srv/CatchTurtle.json
custom_interfaces__rosidl_generator_type_description: CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/build.make
.PHONY : custom_interfaces__rosidl_generator_type_description

# Rule to build all files generated by this target.
CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/build: custom_interfaces__rosidl_generator_type_description
.PHONY : CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/build

CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/cmake_clean.cmake
.PHONY : CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/clean

CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/depend:
	cd /home/zero/turtlesim_project/build/custom_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zero/turtlesim_project/src/custom_interfaces /home/zero/turtlesim_project/src/custom_interfaces /home/zero/turtlesim_project/build/custom_interfaces /home/zero/turtlesim_project/build/custom_interfaces /home/zero/turtlesim_project/build/custom_interfaces/CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/custom_interfaces__rosidl_generator_type_description.dir/depend
