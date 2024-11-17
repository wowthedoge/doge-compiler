cmake_minimum_required(VERSION 3.20)

project(dogelang)
# add_executable(doge main.cpp lexer.cpp parser.cpp)
add_executable(doge main.cpp)

set(CMAKE_CXX_STANDARD 20)

# Find LLVM package
find_package(LLVM REQUIRED CONFIG)

# Add LLVM includes and definitions
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Link directories for LLVM libraries
link_directories(${LLVM_LIB_DIRS})

# For your target:
target_link_libraries(doge
    PRIVATE
    LLVM
)
