#include <iostream>

#include <Flauros.h>

class Sandbox : public Flauros::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};

Flauros::Application* Flauros::createApplication() {

	return new Sandbox();
}