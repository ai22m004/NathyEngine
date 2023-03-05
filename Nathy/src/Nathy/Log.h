#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"



namespace Nathy {
	class NATHY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger; 
	};
}

#define NY_CORE_FATAL(...)   ::Nathy::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define NY_CORE_ERROR(...)   ::Nathy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NY_CORE_WARN(...)    ::Nathy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NY_CORE_INFO(...)    ::Nathy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NY_CORE_TRACE(...)   ::Nathy::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define NY_FATAL(...)   ::Nathy::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define NY_ERROR(...)   ::Nathy::Log::GetClientLogger()->error(__VA_ARGS__)
#define NY_WARN(...)    ::Nathy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NY_INFO(...)    ::Nathy::Log::GetClientLogger()->info(__VA_ARGS__)
#define NY_TRACE(...)   ::Nathy::Log::GetClientLogger()->trace(__VA_ARGS__)