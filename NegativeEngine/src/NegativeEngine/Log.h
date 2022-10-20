#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace NE {

	class NE_API Log
	{
	public:
		void static Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define NE_CORE_TRACE(...) ::NE::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define NE_CORE_DEBUG(...) ::NE::Log::GetCoreLogger()->debug(__VA_ARGS__);
#define NE_CORE_INFO(...) ::NE::Log::GetCoreLogger()->info(__VA_ARGS__);
#define NE_CORE_WARN(...) ::NE::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define NE_CORE_ERROR(...) ::NE::Log::GetCoreLogger()->error(__VA_ARGS__);
#define NE_CORE_CRITICAL(...) ::NE::Log::GetCoreLogger()->critical(__VA_ARGS__);

#define NE_CLIENT_TRACE(...) ::NE::Log::GetClientLogger()->trace(__VA_ARGS__);
#define NE_CLIENT_DEBUG(...) ::NE::Log::GetClientLogger()->debug(__VA_ARGS__);
#define NE_CLIENT_INFO(...) ::NE::Log::GetClientLogger()->info(__VA_ARGS__);
#define NE_CLIENT_WARN(...) ::NE::Log::GetClientLogger()->warn(__VA_ARGS__);
#define NE_CLIENT_ERROR(...) ::NE::Log::GetClientLogger()->error(__VA_ARGS__);
#define NE_CLIENT_CRITICAL(...) ::NE::Log::GetClientLogger()->critical(__VA_ARGS__);

