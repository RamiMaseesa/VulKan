#pragma once

#include "LVE_Window.hpp"
#include <string>

namespace Lve {
	class FirstApp {

		public:
			static constexpr int WIDTH = 1920;
			static constexpr int HEIGHT = 1080;

			void run();
		private:
			LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan" };
	};
}