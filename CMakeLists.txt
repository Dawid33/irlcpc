cmake_minimum_required(VERSION 3.20)
project(irlcpc_proj)

set(CMAKE_CXX_STANDARD 20)

include("include")

add_library(irlcpc
        cpc.cpp
        )

link_libraries(irlcpc)
enable_testing()

add_executable(q1 question1.cpp)
add_executable(q2 question1.cpp)

