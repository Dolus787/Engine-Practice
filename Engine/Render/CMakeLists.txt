file(GLOB headers "incl/*.h" "incl/*.hpp")
file(GLOB sources "src/*.cpp" "src/*.cc" "src/*.c")

set(files ${headers} ${sources})
add_library(Render STATIC ${files})
target_include_directories(Render PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
