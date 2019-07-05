#include <cstdio>

#include <Flauros.h>

class Sandbox : public Flauros::Application {
public:
	Sandbox() {
		printf("Welcome to Flauros Engine!");
	}
	~Sandbox() {}
};

Flauros::Application* Flauros::createApplication() {
	return new Sandbox();
}