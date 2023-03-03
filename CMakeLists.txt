cmake_minimum_required(VERSION 3.23)
project(LeetcodeC C)

set(CMAKE_C_STANDARD 11)

include_directories("common")
set(SOURCES common/array.c)#设置环境变量，编译用到的源文件都要放到这里
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")
add_executable(P2396 algorithm/P2396.c)
add_executable(P2413 algorithm/P2413.c)
add_executable(P1920 algorithm/P1920.c)
