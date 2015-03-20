#ifndef MAIN_HPP
#define MAIN_HPP

#include <GL/glew.h>
#include <GLFW/glfw3.h>

const float vertices[] = {
	0.0f, 0.5f, // Vertex 1 (X, Y)
	0.5f, -0.5f, // Vertex 2 (X, Y)
	-0.5f, -0.5f  // Vertex 3 (X, Y)
};

GLFWwindow* createWindow(int width, int height, char * name, bool fullscreen);

#endif