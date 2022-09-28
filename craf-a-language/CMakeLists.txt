cmake_minimum_required(VERSION 3.20)
project(MyCproject C)

set(CMAKE_C_STANDARD 99)
# 对于modern CMake，不建议对源文件使用变量。 不建议使用glob。
# 相反，通常直接在add_xxx函数中声明源文件。在CMake中指定源文件的最佳方法是明确列出它们。
#file (GLOB_RECURSE files *.c)
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable (${exe} ${file})
#    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()

add_executable(ch13.address ch13/address.c)
add_executable(ch13.jit ch13/jit.c)
