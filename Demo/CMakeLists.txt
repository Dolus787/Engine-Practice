project(Demo)
file(GLOB Demo_Headers "incl/*.h" "incl/*.hpp")
file(GLOB Demo_Sources "src/*.cpp" "src/*.cc" "src/*.c")

set(files ${Demo_headers} ${Demo_Sources})

set(Glad_Source ${CMAKE_SOURCE_DIR}/Dep/glad/src/glad.c)

set(all_files ${Demo_Sources} ${Glad_Source})

add_executable(Demo ${all_files})

target_include_directories(Demo PUBLIC 
dep/glad/include    
dep/glfw/include
dep/glm
Engine/Physics
Engine/Render
)
target_link_libraries(Demo glfw OpenGL::GL Physics Render)