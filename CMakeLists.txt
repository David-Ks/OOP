cmake_minimum_required(VERSION 3.0)

project(PowerPoint)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

file(GLOB SOURCE_FILES "*.cpp" "App/*.cpp" "App/**/*.cpp" "App/**/**/*.cpp" "App/**/**/**/*.cpp" "App/**/**/**/**/*.cpp")

set(GLOB HEADERS "*.hpp" "App/*.hpp" "App/**/*.hpp" "App/**/**/*.hpp" "App/**/**/**/*.hpp" "App/**/**/**/**/*.hpp")

add_executable(PowerPoint ${SOURCE_FILES} ${HEADERS})

target_include_directories(PowerPoint PRIVATE include)

target_link_libraries(PowerPoint PRIVATE Qt5::Widgets)
