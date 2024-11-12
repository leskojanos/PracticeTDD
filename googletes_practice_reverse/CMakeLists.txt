# $ cmake --version
cmake_minimum_required(VERSION 3.5)

#colorize output
#SET(CMAKE_COLOR_DIAGNOSTICS ON)

# Set the project name
project (google_pratice_reverse)

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
  FetchContent_MakeAvailable(googletest)
 endif()

# add header files in the lib
include_directories(lib) 

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/main.cpp
    src/Reverse.cpp
)

# Add an executable with the above sources
add_executable(Reverse ${SOURCES})

# Set the directories that should be included in the build command for this target

target_include_directories(Reverse
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/lib
)

enable_testing()
add_executable(Reverse_test
  src/Reverse.cpp tests/utest-reverse.cpp
)

target_link_libraries(Reverse_test GTest::gtest_main)

add_test(NAME Reverse_test
        COMMAND Reverse_test --gtest_color=1)