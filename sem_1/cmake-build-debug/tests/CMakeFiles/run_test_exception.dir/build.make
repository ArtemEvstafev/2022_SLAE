# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Repositories\SLAE\sem_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Repositories\SLAE\sem_1\cmake-build-debug

# Include any dependencies generated for this target.
include tests/CMakeFiles/run_test_exception.dir/depend.make
# Include the progress variables for this target.
include tests/CMakeFiles/run_test_exception.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/run_test_exception.dir/flags.make

tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.obj: tests/CMakeFiles/run_test_exception.dir/flags.make
tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.obj: tests/CMakeFiles/run_test_exception.dir/includes_CXX.rsp
tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.obj: ../tests/test_exception.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Repositories\SLAE\sem_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.obj"
	cd /d D:\Repositories\SLAE\sem_1\cmake-build-debug\tests && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run_test_exception.dir\test_exception.cpp.obj -c D:\Repositories\SLAE\sem_1\tests\test_exception.cpp

tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_test_exception.dir/test_exception.cpp.i"
	cd /d D:\Repositories\SLAE\sem_1\cmake-build-debug\tests && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Repositories\SLAE\sem_1\tests\test_exception.cpp > CMakeFiles\run_test_exception.dir\test_exception.cpp.i

tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_test_exception.dir/test_exception.cpp.s"
	cd /d D:\Repositories\SLAE\sem_1\cmake-build-debug\tests && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Repositories\SLAE\sem_1\tests\test_exception.cpp -o CMakeFiles\run_test_exception.dir\test_exception.cpp.s

# Object files for target run_test_exception
run_test_exception_OBJECTS = \
"CMakeFiles/run_test_exception.dir/test_exception.cpp.obj"

# External object files for target run_test_exception
run_test_exception_EXTERNAL_OBJECTS =

tests/run_test_exception.exe: tests/CMakeFiles/run_test_exception.dir/test_exception.cpp.obj
tests/run_test_exception.exe: tests/CMakeFiles/run_test_exception.dir/build.make
tests/run_test_exception.exe: src/libmy_project.a
tests/run_test_exception.exe: lib/libgtestd.a
tests/run_test_exception.exe: lib/libgtest_maind.a
tests/run_test_exception.exe: lib/libgtestd.a
tests/run_test_exception.exe: tests/CMakeFiles/run_test_exception.dir/linklibs.rsp
tests/run_test_exception.exe: tests/CMakeFiles/run_test_exception.dir/objects1.rsp
tests/run_test_exception.exe: tests/CMakeFiles/run_test_exception.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Repositories\SLAE\sem_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable run_test_exception.exe"
	cd /d D:\Repositories\SLAE\sem_1\cmake-build-debug\tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\run_test_exception.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/run_test_exception.dir/build: tests/run_test_exception.exe
.PHONY : tests/CMakeFiles/run_test_exception.dir/build

tests/CMakeFiles/run_test_exception.dir/clean:
	cd /d D:\Repositories\SLAE\sem_1\cmake-build-debug\tests && $(CMAKE_COMMAND) -P CMakeFiles\run_test_exception.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/run_test_exception.dir/clean

tests/CMakeFiles/run_test_exception.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Repositories\SLAE\sem_1 D:\Repositories\SLAE\sem_1\tests D:\Repositories\SLAE\sem_1\cmake-build-debug D:\Repositories\SLAE\sem_1\cmake-build-debug\tests D:\Repositories\SLAE\sem_1\cmake-build-debug\tests\CMakeFiles\run_test_exception.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/run_test_exception.dir/depend

