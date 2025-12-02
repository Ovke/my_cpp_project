# CMake generated Testfile for 
# Source directory: C:/Users/Ovke/Desktop/CTest/exp4_tr
# Build directory: C:/Users/Ovke/Desktop/CTest/exp4_tr/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[exp4_tr]=] "C:/Users/Ovke/Desktop/CTest/exp4_tr/build/Debug/test_executor.exe" "Debug")
  set_tests_properties([=[exp4_tr]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[exp4_tr]=] "C:/Users/Ovke/Desktop/CTest/exp4_tr/build/Release/test_executor.exe" "Release")
  set_tests_properties([=[exp4_tr]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[exp4_tr]=] "C:/Users/Ovke/Desktop/CTest/exp4_tr/build/MinSizeRel/test_executor.exe" "MinSizeRel")
  set_tests_properties([=[exp4_tr]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[exp4_tr]=] "C:/Users/Ovke/Desktop/CTest/exp4_tr/build/RelWithDebInfo/test_executor.exe" "RelWithDebInfo")
  set_tests_properties([=[exp4_tr]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp4_tr/CMakeLists.txt;0;")
else()
  add_test([=[exp4_tr]=] NOT_AVAILABLE)
endif()
subdirs("googletest")
