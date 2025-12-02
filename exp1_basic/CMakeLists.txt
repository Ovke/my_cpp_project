cmake_minimum_required(VERSION 4.2.0-rc4)
project(exp1_basic)

set(CMAKE_CXX_STANDARD 17)
# 添加 Executor 库
add_library(exec_lib
    Executor.cpp
)
# 添加测试程序
add_executable(test_executor
    test_executor.cpp
)
# 头文件目录
target_include_directories(test_executor PRIVATE ${PROJECT_SOURCE_DIR})
# 添加 googletest 子目录
add_subdirectory(googletest)
# 链接库
target_link_libraries(test_executor
    exec_lib
    gtest
    gtest_main
)
enable_testing()
add_test(NAME exp1_basic COMMAND test_executor $<CONFIG>)