#include "GLUtils.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

GLuint compileShaderFromFile(std::string fileName, int shaderType)
{
	auto shaderSrc = loadShaderSrc(fileName);
	auto shader = glCreateShader(shaderType);
	const char* p = shaderSrc.c_str();
	glShaderSource(shader, 1, &p, NULL);
	glCompileShader(shader);
	checkShaderCompileSuccess(shader);
	return shader;
}

std::string loadShaderSrc(std::string fileName)
{
	std::ifstream t(fileName.c_str(), std::ifstream::in);
	std::stringstream buffer;
	buffer << t.rdbuf();
	return buffer.str();
}

void checkShaderCompileSuccess(GLuint shader)
{
	GLint status;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
	if (status != GL_TRUE)
	{
		char buffer[512];
		glGetShaderInfoLog(shader, 512, NULL, buffer);
		std::cout << "Failed to compile shader: " << buffer << std::endl;
		exit(1);
	}
}