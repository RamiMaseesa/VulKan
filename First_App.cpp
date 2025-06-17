#include "First_App.hpp"

namespace Lve {
	void FirstApp::run() {
		while (!lveWindow.ShouldClose()) {
			glfwPollEvents();
		}
	}
}