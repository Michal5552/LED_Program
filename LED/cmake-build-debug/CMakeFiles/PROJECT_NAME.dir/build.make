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
CMAKE_SOURCE_DIR = /Users/michal/Desktop/LED

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/michal/Desktop/LED/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PROJECT_NAME.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PROJECT_NAME.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PROJECT_NAME.dir/flags.make

CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o: PROJECT_NAME_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o -c /Users/michal/Desktop/LED/cmake-build-debug/PROJECT_NAME_autogen/mocs_compilation.cpp

CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/cmake-build-debug/PROJECT_NAME_autogen/mocs_compilation.cpp > CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.i

CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/cmake-build-debug/PROJECT_NAME_autogen/mocs_compilation.cpp -o CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.s

CMakeFiles/PROJECT_NAME.dir/main.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PROJECT_NAME.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/main.cpp.o -c /Users/michal/Desktop/LED/main.cpp

CMakeFiles/PROJECT_NAME.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/main.cpp > CMakeFiles/PROJECT_NAME.dir/main.cpp.i

CMakeFiles/PROJECT_NAME.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/main.cpp -o CMakeFiles/PROJECT_NAME.dir/main.cpp.s

CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o -c /Users/michal/Desktop/LED/mainwindow.cpp

CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/mainwindow.cpp > CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.i

CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/mainwindow.cpp -o CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.s

CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o: ../Led_Component.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o -c /Users/michal/Desktop/LED/Led_Component.cpp

CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/Led_Component.cpp > CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.i

CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/Led_Component.cpp -o CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.s

CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o: ../helpdialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o -c /Users/michal/Desktop/LED/helpdialog.cpp

CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/helpdialog.cpp > CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.i

CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/helpdialog.cpp -o CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.s

CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o: CMakeFiles/PROJECT_NAME.dir/flags.make
CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o: ../authorinformation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o -c /Users/michal/Desktop/LED/authorinformation.cpp

CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/michal/Desktop/LED/authorinformation.cpp > CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.i

CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/michal/Desktop/LED/authorinformation.cpp -o CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.s

# Object files for target PROJECT_NAME
PROJECT_NAME_OBJECTS = \
"CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/PROJECT_NAME.dir/main.cpp.o" \
"CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o" \
"CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o" \
"CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o" \
"CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o"

# External object files for target PROJECT_NAME
PROJECT_NAME_EXTERNAL_OBJECTS =

PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/PROJECT_NAME_autogen/mocs_compilation.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/main.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/mainwindow.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/Led_Component.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/helpdialog.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/authorinformation.cpp.o
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/build.make
PROJECT_NAME: /Users/michal/Qt/5.13.0/clang_64/lib/QtWidgets.framework/QtWidgets
PROJECT_NAME: /Users/michal/Qt/5.13.0/clang_64/lib/QtGui.framework/QtGui
PROJECT_NAME: /Users/michal/Qt/5.13.0/clang_64/lib/QtCore.framework/QtCore
PROJECT_NAME: CMakeFiles/PROJECT_NAME.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable PROJECT_NAME"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PROJECT_NAME.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PROJECT_NAME.dir/build: PROJECT_NAME

.PHONY : CMakeFiles/PROJECT_NAME.dir/build

CMakeFiles/PROJECT_NAME.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PROJECT_NAME.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PROJECT_NAME.dir/clean

CMakeFiles/PROJECT_NAME.dir/depend:
	cd /Users/michal/Desktop/LED/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/michal/Desktop/LED /Users/michal/Desktop/LED /Users/michal/Desktop/LED/cmake-build-debug /Users/michal/Desktop/LED/cmake-build-debug /Users/michal/Desktop/LED/cmake-build-debug/CMakeFiles/PROJECT_NAME.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PROJECT_NAME.dir/depend
