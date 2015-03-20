#version 440

in vec3 Color;

out vec4 outColor;

void main()
{
    outColor = vec4(vec3(1.0)-Color, 1.0);
}