#pragma once

#include "Application.h"

#ifdef NE_PLATFORM_WINDOWS

extern NE::Application* NE::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NE::CreateApplication();
	app->Application::Run();
	delete app;
}

#endif