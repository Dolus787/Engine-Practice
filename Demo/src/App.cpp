#include "App.hpp"
#include "../../Dep/glad/include/glad/glad.h"
#include <GLFW/glfw3.h>
#include <iostream>
#include <glm/glm.hpp>
#include <Render/utils.hpp>

void App::Initiate()
{
    if(!glfwInit())
    {
        std::cerr<<"failed to initialize glfw\n";
    }
    window = glfwCreateWindow(500, 500,  "YOOOO", NULL, NULL);
    
    glfwMakeContextCurrent(window);
    
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr<<"failed to initialize glad\n";
    }
}
void App::Run()
{
    glClearColor(0.5, 0.5, 1, 1);
    while (!glfwWindowShouldClose(window) && !glfwGetKey(window, GLFW_KEY_ESCAPE))
    {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }
}
void App::Close()
{
    // glfwTerminate();
}