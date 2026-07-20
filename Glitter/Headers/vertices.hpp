#pragma once

float vertices[] = {
    // Tri 1
    0.1f, 0.1f, 0.0f,
    0.75f, 0.1f, 0.0f,
    0.5f, 0.5f, 0.0f,

    // Tri 2
    -0.1f, -0.1f, 0.0f,
    -0.1f, -0.9f, 0.0f,
    -0.9f, -0.1f, 0.0f
};

unsigned int indices[] = {  // note that we start from 0!
    0, 1, 3,   // first triangle
    1, 2, 3    // second triangle
};
