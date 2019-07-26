#include "Log.h"

namespace Flauros {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T]%$ %n: %v");
		s_CoreLogger = spdlog::stdout_color_mt("Flauros");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("SandboxApp");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}
