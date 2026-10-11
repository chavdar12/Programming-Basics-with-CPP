cmake_minimum_required(VERSION 4.3)
project(Programming_Basics_with_CPP)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/0*/Ex*/*.cpp")

foreach(src ${SOURCES})
    file(RELATIVE_PATH rel "${CMAKE_SOURCE_DIR}" "${src}")
    string(REPLACE "/" "_" target "${rel}")
    string(REPLACE ".cpp" "" target "${target}")
    string(REPLACE "-" "_" target "${target}")
    add_executable(${target} ${src})
endforeach()