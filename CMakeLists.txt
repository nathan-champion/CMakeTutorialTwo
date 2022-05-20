cmake_minimum_required(VERSION 3.1)

project(hello_world LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)

set(MYVAR "tony")

function(print var)
    message("${var} = ${${var}}")
endfunction()                                                                                             

function(print_a_lot)
    foreach(var ${ARGN})
        message("${var} = ${${var}}")    
    endforeach(var)
endfunction()

function(print_env)
    foreach(var ${ARGN})
        message("${var} = $ENV{${var}}")    
    endforeach(var)
endfunction()

print(PROJECT_NAME)
print_a_lot(PROJECT_NAME MYVAR)