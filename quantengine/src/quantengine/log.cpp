#include "log.h"

namespace qe {
	 std::shared_ptr<spdlog::logger> log::s_CoreLogger;
	 std::shared_ptr<spdlog::logger> log::s_ClientLogger;

	 void log::init() {
		 spdlog::set_pattern("%^[%T] %n: %v%$");
		 s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		 s_CoreLogger->set_level(spdlog::level::trace);
		 s_ClientLogger = spdlog::stdout_color_mt("CLIENT");
		 s_ClientLogger->set_level(spdlog::level::trace);

	 }
}