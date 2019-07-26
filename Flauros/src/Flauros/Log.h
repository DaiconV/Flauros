#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Flauros {
	class Log
	{
	public:
		FLAUROS_API static void Init();
		FLAUROS_API inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		FLAUROS_API inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define FLAUROS_CORE_FAIL(...) { \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T] -FAIL-%$ %n: %v"); \
	Flauros::Log::GetCoreLogger()->error(__VA_ARGS__); \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_CORE_WARN(...) { \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T] -WARN-%$ %n: %v"); \
	Flauros::Log::GetCoreLogger()->warn(__VA_ARGS__); \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_CORE_DEBUG(...) { \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T] -DBUG-%$ %n: %v"); \
	Flauros::Log::GetCoreLogger()->debug(__VA_ARGS__); \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_CORE_INFO(...) { \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T] -INFO-%$ %n: %v"); \
	Flauros::Log::GetCoreLogger()->info(__VA_ARGS__); \
	Flauros::Log::GetCoreLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_CORE_PRINT(...) Flauros::Log::GetCoreLogger()->trace(__VA_ARGS__)


#define FLAUROS_FAIL(...) { \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T] -FAIL-%$ %n: %v"); \
	Flauros::Log::GetClientLogger()->error(__VA_ARGS__); \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_WARN(...) { \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T] -WARN-%$ %n: %v"); \
	Flauros::Log::GetClientLogger()->warn(__VA_ARGS__); \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_DEBUG(...) { \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T] -DBUG-%$ %n: %v"); \
	Flauros::Log::GetClientLogger()->debug(__VA_ARGS__); \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_INFO(...) { \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T] -INFO-%$ %n: %v"); \
	Flauros::Log::GetClientLogger()->info(__VA_ARGS__); \
	Flauros::Log::GetClientLogger()->set_pattern("%^[%T]%$ %n: %v"); \
}
#define FLAUROS_PRINT(...) Flauros::Log::GetClientLogger()->trace(__VA_ARGS__)