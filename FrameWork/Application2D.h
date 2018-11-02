#pragma once

#include "Renderer2D.h"

struct GLFWwindow;
class Application2D
{
public:
	/* GLFW - Initialize and Configure */
	Application2D();

	/* GLFW - render loop */
	void runApp(const char* title, int width, int height, bool fullscreen = false);

	void start();
	void draw();

	/* refreshes the screen */
	void clearScreen();

	~Application2D();

protected:
	/* GLFW - window creation */
	bool createWindow(int width, int height, const char* title, bool fullscreen = false);

	/* quit GLFW window upon escape key press */
	void quit(GLFWwindow* window);

	GLFWwindow* m_window;

	bool m_gameOver;

	/* Application stuff */
	Renderer2D* renderer2D;
};

