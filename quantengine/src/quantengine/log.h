#pragma once

#include <memory>

#include "core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace qe {
	class QE_API log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& get_core_logger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& get_client_logger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
	
}
//Core log Macros
#define QE_CORE_TRACE(...) ::qe::log::get_core_logger()->trace(__VA_ARGS__)
#define QE_CORE_INFO(...) ::qe::log::get_core_logger()->info(__VA_ARGS__)
#define QE_CORE_WARN(...) ::qe::log::get_core_logger()->warn(__VA_ARGS__)
#define QE_CORE_ERROR(...) ::qe::log::get_core_logger()->error(__VA_ARGS__)
#define QE_CORE_CRITICAL(...) ::qe::log::get_core_logger()->critical(__VA_ARGS__)

//Client log Macros
#define QE_TRACE(...) ::qe::log::get_core_logger()->trace(__VA_ARGS__)
#define QE_INFO(...) ::qe::log::get_core_logger()->info(__VA_ARGS__)
#define QE_WARN(...) ::qe::log::get_core_logger()->warn(__VA_ARGS__)
#define QE_ERROR(...) ::qe::log::get_core_logger()->error(__VA_ARGS__)
#define QE_CRITICAL(...) ::qe::log::get_core_logger()->critical(__VA_ARGS__)
