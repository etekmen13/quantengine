#pragma once

#include "core.h"
namespace qe {
	class QE_API app
	{
	public:
		app();
		virtual ~app();

		void run();
	};
	// To be defined by the client.
	app* createApp();
}


