#include <GearUp.h>

class Sandbox : public GearUp::Application {

public:
	Sandbox() 
	{

	}
	~Sandbox()
	{

	}

};


GearUp::Application* GearUp::CreateApplication() {

	return new Sandbox();


}

