# CMake generated Testfile for 
# Source directory: C:/Users/Ovke/Desktop/CTest/exp3_back
# Build directory: C:/Users/Ovke/Desktop/CTest/exp3_back/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[exp3_back]=] "C:/Users/Ovke/Desktop/CTest/exp3_back/build/Debug/test_executor.exe" "Debug")
  set_tests_properties([=[exp3_back]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[exp3_back]=] "C:/Users/Ovke/Desktop/CTest/exp3_back/build/Release/test_executor.exe" "Release")
  set_tests_properties([=[exp3_back]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[exp3_back]=] "C:/Users/Ovke/Desktop/CTest/exp3_back/build/MinSizeRel/test_executor.exe" "MinSizeRel")
  set_tests_properties([=[exp3_back]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[exp3_back]=] "C:/Users/Ovke/Desktop/CTest/exp3_back/build/RelWithDebInfo/test_executor.exe" "RelWithDebInfo")
  set_tests_properties([=[exp3_back]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp3_back/CMakeLists.txt;0;")
else()
  add_test([=[exp3_back]=] NOT_AVAILABLE)
endif()
subdirs("googletest")
