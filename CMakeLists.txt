cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME template)
set(LIBRARY_NAME libs)


project(
    ${PROJECT_NAME}
    VERSION 1.0.0
    LANGUAGES C CXX 
)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

add_git_submodule(external/gtest)
add_git_submodule(external/json)

add_subdirectory(libs)
add_subdirectory(configured)
add_subdirectory(external)
if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()
