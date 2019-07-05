#pragma once

#include <memory>

#include "Application.h"

#ifdef _WIN64
extern Flauros::Application* Flauros::createApplication();

int main(int argc, char** argv)
{
	std::unique_ptr<Flauros::Application> app(Flauros::createApplication());
	app->run();

	return 0;
}

#else
	#error This platform is not supported!
#endif