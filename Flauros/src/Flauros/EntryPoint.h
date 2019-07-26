#pragma once

#include <memory>

#include "Application.h"

#ifdef _WIN64
extern Flauros::Application* Flauros::createApplication();

int main(int argc, char** argv)
{
	Flauros::Log::Init();

	FLAUROS_FAIL("what message?");
	FLAUROS_WARN("what message?");
	FLAUROS_DEBUG("what message?");
	FLAUROS_INFO("what message?");
	FLAUROS_PRINT("what message?");

	std::unique_ptr<Flauros::Application> app(Flauros::createApplication());
	app->run();
	return 0;
}

#else
	#error This platform is not supported!
#endif