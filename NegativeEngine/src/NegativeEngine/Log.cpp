#include "Log.h"

std::shared_ptr<spdlog::logger> NE::Log::s_CoreLogger;
std::shared_ptr<spdlog::logger> NE::Log::s_ClientLogger;

void NE::Log::Init()
{
	spdlog::set_pattern("%^[%T] %n: %v %$");

	s_CoreLogger = spdlog::stdout_color_mt("NEGATIVE ENGINE");
	s_CoreLogger->set_level(spdlog::level::trace);

	s_ClientLogger = spdlog::stdout_color_mt("APP");
	s_ClientLogger->set_level(spdlog::level::trace);
}
