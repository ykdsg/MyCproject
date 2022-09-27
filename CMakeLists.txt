cmake_minimum_required(VERSION 3.20)
project(MyCproject C)

set(CMAKE_C_STANDARD 99)

#add_executable(1 main.c )
#add_executable(2 change.c)

# 用来解决多个main函数报错的问题
#file (GLOB files *.c */*.c */*/*.c)
##file (GLOB_RECURSE files *.c)
#foreach (file ${files})
##    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
##status表示这是一般的打印信息，我们还可以设置为“ERROR”，表示这是一种错误打印信息。
##    message(STATUS "this file = ${file}.")
#    string(REGEX REPLACE ".+/(.+)/(.+)\\..*" "\\1.\\2" exe ${file})
#    message(STATUS "this exe = ${exe}  ${file}")
#    add_executable (${exe} ${file})
##    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()

#file (GLOB files *.c */*.c)
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable (${exe} ${file})
#    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()

add_subdirectory(network/)
add_subdirectory(demo/)
add_subdirectory(craf-a-language/)