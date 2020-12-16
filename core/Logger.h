#pragma once
#include "spdlog/spdlog.h"

// Log macros in ascending order
#ifdef _DEBUG
#define CORE_TRACE(...)			Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_DEBUG(...)			Logger::GetCoreLogger()->debug(__VA_ARGS__)
#define CORE_INFO(...)			Logger::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)			Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...)			Logger::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_CRITICAL(...)	Logger::GetCoreLogger()->critical(__VA_ARGS__)
#else
#define CORE_TRACE
#define CORE_DEBUG
#define CORE_INFO
#define CORE_WARN
#define CORE_ERROR
#define CORE_CRITICAL
#endif // _DEBUG



class Logger
{
public:
	static void Init();
	inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
};

