#pragma once

#include "Core.h"

namespace Nathy {
	class NATHY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

