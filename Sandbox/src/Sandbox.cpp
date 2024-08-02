#include <quantengine.h>

class sandbox : public qe::app {
public:
	sandbox() {

	}
	~sandbox() {

	}

};

qe::app* qe::createApp() {
	return new sandbox();
}