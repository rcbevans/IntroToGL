#ifndef MAIN_HPP
#define MAIN_HPP

#include <GL/glew.h>
#include <GLFW/glfw3.h>

const float vertices[] = {
	-0.5f, 0.5f, 1.0f, 0.0f, 0.0f, // Top-left
	0.5f, 0.5f, 0.0f, 1.0f, 0.0f, // Top-right
	0.5f, -0.5f, 0.0f, 0.0f, 1.0f, // Bottom-right
	-0.5f, -0.5f, 1.0f, 1.0f, 1.0f  // Bottom-left
};

const int elements[] = {
	0, 1, 2,
	2, 3, 0
};

GLFWwindow* createWindow(int width, int height, char * name, bool fullscreen);

#endif