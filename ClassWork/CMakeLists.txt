cmake_minimum_required(VERSION 4.2)
project(ExecutorTest)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_subdirectory(tests/googletest)
set(GTEST_LIBRARIES GTest::GTest GTest::Main)

enable_testing()

add_library(exec_lib
    src/SportCar.cpp
    src/Bus.cpp
    src/Executor.cpp
)
# 主程序
add_executable(main main.cpp)
target_link_libraries(main exec_lib)
# 测试
add_executable(test_executor tests/test_executor.cpp)
# 将原target_link_libraries中的${GTEST_LIBRARIES}改为gtest gtest_main
target_link_libraries(test_executor exec_lib gtest gtest_main
add_test(NAME ExecutorTest COMMAND test_executor)