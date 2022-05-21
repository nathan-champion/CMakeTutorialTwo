cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

# set the project name, also we can set a version
project(hello_world VERSION "1.0")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#updating a configuration file
configure_file(Config.hpp.in Config.hpp)

# add the executable
add_executable(${PROJECT_NAME} main.cpp)

# this was done to allow the configuration file to be included to the project
target_include_directories(${PROJECT_NAME} PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )