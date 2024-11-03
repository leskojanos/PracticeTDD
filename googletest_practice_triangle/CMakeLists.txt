# $ cmake --version
cmake_minimum_required(VERSION 3.5)

#colorize output
SET(CMAKE_COLOR_DIAGNOSTICS ON)

#set compiler
# v1_NGM
#set(CMAKE_CXX_COMPILER "c:/msys64/ucrt64/bin/g++.exe")
#set(CMAKE_C_COMPILER "c:/msys64/ucrt64/bin/gcc.exe")
# v2_HOME
#set(CMAKE_C_COMPILER "c:/msys64/mingw64/bin/gcc.exe")
#set(CMAKE_CXX_COMPILER "c:/msys64/mingw64/bin/g++.exe")

# Set the project name
project (googletest_practice_triangle)

#get googletest
include(FetchContent)
FetchContent_Declare(googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG v1.15.2)
  FetchContent_GetProperties(googletest)
  #googletest_POPULATED
  #googletest_SOURCE_DIR
  #googletest_BUILD_DIR
 if(NOT googletest_POPULATED)
  #deprecated
  #FetchContent_Populate(googletest) 
  # For Windows: Prevent overriding the parent project's compiler/linker settings
  #https://www.rovidit.es/6sLD
  # set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)
  #https://www.rovidit.es/dFJ1
  #add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
  #echoing variables      
  #message(xxxFIGYELEMxxx_GOOGLETEST_SOURCE_DIR="${googletest_SOURCE_DIR}")
  #message(xxxFIGYELEMxxx_GOOGLETEST_BUILD_DIR="${googletest_BUILD_DIR}")
 endif()

# add googletest subdirectory
# add_subdirectory(googletest)

# this is so we can #include <gtest/gtest.h> 
#include_directories(googletest/include)
#include_directories(googletest/include)


# add header files in the lib
include_directories(lib) 

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/main.cpp
    src/Triangle.cpp
)

# Add an executable with the above sources
add_executable(Triangle ${SOURCES})


# Set the directories that should be included in the build command for this target

target_include_directories(Triangle
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/lib
)


enable_testing()
add_executable(Triangle_test
  src/Triangle.cpp tests/utest-triangle.cpp 
)

target_link_libraries(Triangle_test GTest::gtest_main)

#display googletest console colors
#https://www.rovidit.es/s6cF
add_test(NAME Triangle_test
        COMMAND Triangle_test --gtest_color=1)
