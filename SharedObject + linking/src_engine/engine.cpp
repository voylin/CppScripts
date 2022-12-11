#include "engine.hpp"

int mke::create_window() {
  // Initialize the GLFW library
  if (!glfwInit())
    return -1;

  // Create a windowed mode window and its OpenGL context
  GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Loop until the user closes the window
  while (!glfwWindowShouldClose(window))
  {
    // Render here

    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
