#include <iostream> // Include the iostream library for input and output operations
#include <GLFW/glfw3.h> // Include the GLFW library for creating windows and handling input

GLFWwindow* startGLFW();

int main(){
    GLFWwindow* window = startGLFW();
    
    while(!glfwWindowShouldClose(window)){



        glfwSwapBuffers(window); //Swap buffers front and back
        glfwPollEvents();        //Poll Events (inputs)
    }

}


GLFWwindow* startGLFW(){
    if(!glfwInit()){
        std::cerr<<"failed to intialize glfw, panic!"<<std::endl;
        return nullptr;
    }
    GLFWwindow* window = glfwCreateWindow(800,600, "Screen", nullptr, nullptr);

    return window;
};
