#pragma once

#define GLFW_INCLUDE_VULKAN

#include "C:/VS Libraries/GLFW/glfw-3.3.9.bin.WIN64/include/GLFW/glfw3.h"
#include <string>

namespace lve {


class LveWindow {
	public:
	LveWindow(int w, int h, std::string name);
	~LveWindow();
	LveWindow(const LveWindow&) = delete;
	LveWindow& operator=(const LveWindow&) = delete;


	bool shouldClose();

	void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow *window;
};
}