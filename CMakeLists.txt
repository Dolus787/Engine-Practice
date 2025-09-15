cmake_minimum_required(VERSION 3.16)
project(Engine-Practice)

find_package(OpenGL REQUIRED)

set(CMAKE_BUILD_TYPE "Debug") # Until I want performance i guess. 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(Dep/glfw)
add_subdirectory(Dep/glm)

add_subdirectory(Engine/Physics)
add_subdirectory(Engine/Render)

add_subdirectory(Demo)


