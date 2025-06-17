#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace Lve {
	class LveWindow {

	public:
		LveWindow(int w, int h, std::string name);
		~LveWindow();

		LveWindow(const LveWindow&) = delete;
		LveWindow &operator=(const LveWindow &) = delete;

		bool ShouldClose() { return glfwWindowShouldClose(window); }
	private:
		void InitWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow *window;

	};
}