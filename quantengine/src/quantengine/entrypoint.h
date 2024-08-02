#pragma once

#ifdef QE_PLATFORM_WINDOWS

extern qe::app* qe::createApp();

int main(int argc, char** argv) {

	qe::log::init();

	QE_CORE_WARN("Initialized Log!");
	int a = 13;
	QE_INFO("Hello! {0:x}", a);
	auto app = qe::createApp();
	app->run();
	delete app;
}
#else
	#error Quant Engine Only Supports Windows!
#endif