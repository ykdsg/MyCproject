cmake_minimum_required(VERSION 3.20)
project(MyCproject C)

set(CMAKE_C_STANDARD 99)

#add_executable(1 main.c )
#add_executable(2 change.c)

file (GLOB files *.c */*.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

add_subdirectory(network/)