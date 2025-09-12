cmake_minimum_required(VERSION 3.16)
project(Engine-Practice)

find_package(OpenGL REQUIRED)

add_subdirectory(dep/glfw)
add_subdirectory(dep/glm)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_BUILD_TYPE "Debug")
add_executable(EngineTesta src/projDemo/main.cpp dep/glad/src/glad.c)
target_include_directories(EngineTesta PUBLIC 
    dep/glad/include    
    dep/glfw/include
    dep/glm    
)
target_link_libraries(EngineTesta glfw OpenGL::GL)