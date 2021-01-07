cmake_minimum_required(VERSION 3.10)

# set project name
project(chessManager)

find_package(Catch2 REQUIRED)
# add the executable
add_executable(chessManager unitTests.cpp)

target_link_libraries(chessManager PRIVATE Catch2::Catch2)