#include "Logger.h"
#include "spdlog/sinks/stdout_color_sinks.h"

std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;

void Logger::Init()
{
	s_CoreLogger = spdlog::stdout_color_mt("CORE");
	s_CoreLogger->set_pattern("%^[%H:%M:%S] [%n]::<%l> %v%$");
	s_CoreLogger->set_level(spdlog::level::trace);
}