#version 440

in float shade;

out vec4 outColor;

void main()
{
    outColor = vec4(vec3(shade), 1.0);
}