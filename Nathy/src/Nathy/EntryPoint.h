#pragma once

#ifdef NY_PLATFORM_WINDOWS

extern Nathy::Application* Nathy::CreateApplication();

int main(int argc, char** argv)
{
	Nathy::Log::Init();
	NY_CORE_WARN("Aweh do kummt wos!");
	NY_INFO("Aweh do is wos!");
	auto app = Nathy::CreateApplication();
	app->Run();
	delete app;
}

#endif
