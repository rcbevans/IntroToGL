#ifndef MAIN_HPP
#define MAIN_HPP

#include <GL/glew.h>
#include <GLFW/glfw3.h>

float vertices[] = {
	0.0f, 0.5f, 1.0f, 0.0f, 0.0f, // Vertex 1: Red
	0.5f, -0.5f, 0.0f, 1.0f, 0.0f, // Vertex 2: Green
	-0.5f, -0.5f, 0.0f, 0.0f, 1.0f  // Vertex 3: Blue
};

GLFWwindow* createWindow(int width, int height, char * name, bool fullscreen);

#endif