set(BINARY ${CMAKE_PROJECT_NAME})
set(source_files main.cpp)
add_executable(${BINARY} ${source_files})
add_library(${BINARY}_lib SHARED ${source_files})