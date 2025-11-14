cmake_minimum_required(VERSION 3.10)  # 指定CMake最低版本
project(homework4)            # 项目名称

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(calculator 
    main.cpp 
    calculator.cpp 
    calculator.h
)

add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)