add_library(MathFunctions mysquare.cpp)
target_include_directories(MathFunctions
            INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})   