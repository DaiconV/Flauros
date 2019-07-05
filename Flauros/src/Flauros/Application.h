#pragma once

#include "Core.h"

namespace Flauros {
	class FLAUROS_API Application {
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* createApplication();
}

