# CMake generated Testfile for 
# Source directory: C:/Users/Ovke/Desktop/CTest/ClassWork
# Build directory: C:/Users/Ovke/Desktop/CTest/ClassWork/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[ExecutorTest]=] "C:/Users/Ovke/Desktop/CTest/ClassWork/build/test_executor.exe")
set_tests_properties([=[ExecutorTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/ClassWork/CMakeLists.txt;71;add_test;C:/Users/Ovke/Desktop/CTest/ClassWork/CMakeLists.txt;0;")
subdirs("tests/googletest")
