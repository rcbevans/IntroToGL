#ifndef GLUTILS_HPP
#define GLUTILS_HPP

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <gl\glew.h>
#include <gl\GL.h>
#include <string>

GLuint compileShaderFromFile(std::string fileName, int shaderType);

void checkShaderCompileSuccess(GLuint shader);

std::string loadShaderSrc(std::string fileName);

#endif