# CMake generated Testfile for 
# Source directory: C:/Users/Ovke/Desktop/CTest/exp2_speed
# Build directory: C:/Users/Ovke/Desktop/CTest/exp2_speed/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[exp2_basic]=] "C:/Users/Ovke/Desktop/CTest/exp2_speed/build/Debug/test_executor.exe" "Debug")
  set_tests_properties([=[exp2_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[exp2_basic]=] "C:/Users/Ovke/Desktop/CTest/exp2_speed/build/Release/test_executor.exe" "Release")
  set_tests_properties([=[exp2_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[exp2_basic]=] "C:/Users/Ovke/Desktop/CTest/exp2_speed/build/MinSizeRel/test_executor.exe" "MinSizeRel")
  set_tests_properties([=[exp2_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[exp2_basic]=] "C:/Users/Ovke/Desktop/CTest/exp2_speed/build/RelWithDebInfo/test_executor.exe" "RelWithDebInfo")
  set_tests_properties([=[exp2_basic]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;30;add_test;C:/Users/Ovke/Desktop/CTest/exp2_speed/CMakeLists.txt;0;")
else()
  add_test([=[exp2_basic]=] NOT_AVAILABLE)
endif()
subdirs("googletest")
