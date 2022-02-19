# CMake generated Testfile for 
# Source directory: D:/Repositories/SLAE/sem_1/tests
# Build directory: D:/Repositories/SLAE/sem_1/cmake-build-debug/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(run_test_exception "D:/Repositories/SLAE/sem_1/cmake-build-debug/tests/run_test_exception.exe")
set_tests_properties(run_test_exception PROPERTIES  _BACKTRACE_TRIPLES "D:/Repositories/SLAE/sem_1/tests/CMakeLists.txt;24;add_test;D:/Repositories/SLAE/sem_1/tests/CMakeLists.txt;0;")
subdirs("googletest-master")
