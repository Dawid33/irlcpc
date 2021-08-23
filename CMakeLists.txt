cmake_minimum_required(VERSION 3.20)
project(irlcpc_proj)

set(CMAKE_CXX_STANDARD 20)

include_directories("common/include")
add_library(irlcpc
        common/io.cpp
)

link_libraries(irlcpc)
enable_testing()

include_directories("answers/include")
file(COPY answers/resources DESTINATION .)
add_executable(q1 answers/question1.cpp)
add_executable(q2 answers/question2.cpp)

add_test(
        NAME q1
        COMMAND $<TARGET_FILE:q1> resources/q1_input.txt
)
add_test(
        NAME q2
        COMMAND $<TARGET_FILE:q2>
)


