# CMake generated Testfile for 
# Source directory: C:/Users/Ovke/Desktop/CTest/exp1_basic
# Build directory: C:/Users/Ovke/Desktop/CTest/exp1_basic/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[exp1_basic]=] "C:/Users/Ovke/Desktop/CTest/exp1_basic/build/Debug/test_executor.exe" "Debug")
  set_tests_properties([=[exp1_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;63;add_test;C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[exp1_basic]=] "C:/Users/Ovke/Desktop/CTest/exp1_basic/build/Release/test_executor.exe" "Release")
  set_tests_properties([=[exp1_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;63;add_test;C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[exp1_basic]=] "C:/Users/Ovke/Desktop/CTest/exp1_basic/build/MinSizeRel/test_executor.exe" "MinSizeRel")
  set_tests_properties([=[exp1_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;63;add_test;C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[exp1_basic]=] "C:/Users/Ovke/Desktop/CTest/exp1_basic/build/RelWithDebInfo/test_executor.exe" "RelWithDebInfo")
  set_tests_properties([=[exp1_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;63;add_test;C:/Users/Ovke/Desktop/CTest/exp1_basic/CMakeLists.txt;0;")
else()
  add_test([=[exp1_basic]=] NOT_AVAILABLE)
endif()
subdirs("googletest")
