#pragma once

#ifdef NE_PLATFORM_WINDOWS

extern NE::Application* NE::CreateApplication();

int main(int argc, char** argv)
{
	NE::Log::Init();

	NE_CORE_TRACE("Core trace message!");
	NE_CORE_DEBUG("Core trace message!");
	NE_CORE_INFO("Core trace message!");
	NE_CORE_WARN("Core trace message!");
	NE_CORE_ERROR("Core trace message!");
	NE_CORE_CRITICAL("Core trace message!");

	NE_CLIENT_TRACE("Client trace message!");
	NE_CLIENT_DEBUG("Client trace message!");
	NE_CLIENT_INFO("Client trace message!");
	NE_CLIENT_WARN("Client trace message!");
	NE_CLIENT_ERROR("Client trace message!");
	NE_CLIENT_CRITICAL("Client trace message!");

	auto app = NE::CreateApplication();
	app->Application::Run();
	delete app;
}

#endif