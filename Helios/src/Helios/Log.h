#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Helios {

	class HELIOS_API Log
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

// Core log macros
#define HL_CORE_TRACE(...)		::Helios::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HL_CORE_INFO(...)		::Helios::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HL_CORE_WARN(...)		::Helios::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HL_CORE_ERROR(...)		::Helios::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HL_CORE_FATAL(...)		::Helios::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HL_CLIENT_TRACE(...)	::Helios::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HL_CLIENT_INFO(...)		::Helios::Log::GetClientLogger()->info(__VA_ARGS__)
#define HL_CLIENT_WARN(...)		::Helios::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HL_CLIENT_ERROR(...)	::Helios::Log::GetClientLogger()->error(__VA_ARGS__)
#define HL_CLIENT_FATAL(...)	::Helios::Log::GetClientLogger()->fatal(__VA_ARGS__)
