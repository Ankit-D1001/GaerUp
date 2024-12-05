#pragma once

#ifdef GP_PLATFORM_WINDOWS

extern GearUp::Application* GearUp::CreateApplication();
	
int main(int argc, char** argv) {

	printf("Entry \n");
	auto app = GearUp::CreateApplication();
	app->run();
	delete app;
}

#endif
