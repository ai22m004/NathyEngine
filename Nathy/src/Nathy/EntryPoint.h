#pragma once

#ifdef NY_PLATFORM_WINDOWS



extern Nathy::Application* Nathy::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hallo from Nathy Engine");
	auto app = Nathy::CreateApplication();
	app->Run();
	delete app;
}

#endif
