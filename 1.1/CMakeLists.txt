# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# use clangd generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the project name
project (my_project)

# Add an executable
add_executable(my_project main.cpp)
