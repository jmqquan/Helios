#pragma once

#include "Core.h"

namespace Helios {

	class HELIOS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to de defined it CLIENT
	Application* CreateApplication();
}


