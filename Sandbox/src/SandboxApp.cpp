#include <iostream>

#include <Flauros.h>

class Sandbox : public Flauros::Application {
public:
	Sandbox() {
		std::cout << "Welcome to Flauros Engine!" << std::endl;
	}
	~Sandbox() {}
};

Flauros::Application* Flauros::createApplication() {

	return new Sandbox();
}