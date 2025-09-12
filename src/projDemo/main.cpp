#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <linux/input-event-codes.h>
int main()
{
    GLFWwindow* window;
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
    glClearColor(0.5, 0.5, 1, 1);
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        std::cout<<(glfwGetKey(window, KEY_A));
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    } 
}