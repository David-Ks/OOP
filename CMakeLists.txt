cmake_minimum_required(VERSION 3.0)

project(Parser)

# Create a variable to store a list of all source files
file(GLOB SOURCE_FILES "*.cpp" "App/*.cpp" "App/**/*.cpp" "App/**/**/*.cpp" "App/**/**/**/*.cpp")

# Add your source files to the executable
add_executable(Parser ${SOURCE_FILES})

# Include directories
target_include_directories(Parser PRIVATE include)
