#pragma once

#include "core.h"


namespace GearUp {

	class GP_API Application
	{

	public:
		Application();

		virtual ~Application();

		void run();


	};

	Application* CreateApplication();

}

