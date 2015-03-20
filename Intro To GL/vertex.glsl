#version 440

in vec2 position;
in float value;

out float shade;

void main()
{
    shade = value;
    gl_Position = vec4(position.x, -position.y, 0.0, 1.0);
}