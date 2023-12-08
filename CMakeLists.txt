cmake_minimum_required(VERSION 3.0)

project(Parser)

# Create a variable to store a list of all source files
file(GLOB SOURCE_FILES "*.cpp" "App/*.cpp" "App/**/*.cpp" "App/**/**/*.cpp" "App/**/**/**/*.cpp" "App/**/**/**/**/*.cpp")

set(GLOB HEADERS "*.hpp" "App/*.hpp" "App/**/*.hpp" "App/**/**/*.hpp" "App/**/**/**/*.hpp" "App/**/**/**/**/*.hpp")

add_executable(Parser ${SOURCE_FILES} ${HEADERS})

target_include_directories(Parser PRIVATE include)
