#pragma once

float vertices_tri1[] = {
    // Tri 1
    0.1f, 0.1f, 0.0f,
    0.75f, 0.2f, 0.0f,
    0.5f, 0.5f, 0.0f,
};

float vertices_tri2[] = {
    -0.1f, -0.1f, 0.0f,
    -0.1f, -0.2f, 0.0f,
    -0.9f, -0.1f, 0.0f
};

unsigned int indices[] = {  // note that we start from 0!
    0, 1, 3,   // first triangle
    1, 2, 3    // second triangle
};
