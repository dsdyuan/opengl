/*
 * Main.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: yuanhong
 */

#include <GL/glew.h>
#include <GLFW/glfw3.h>

void renderScene();

int main(int argc, char **argv) {

	glfwInit();
	GLFWwindow *window = glfwCreateWindow(800, 768, "Hello OpenGL", NULL, NULL);

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		renderScene();

		glfwSwapBuffers(window);
		glfwPollEvents();

	}
	glfwTerminate();

	return 0;
}

void renderScene() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0, 0.0, 1.0, 1.0);

}
