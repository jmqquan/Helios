#pragma once

#ifdef HL_PLATFORM_WINDOWS

extern Helios::Application* Helios::CreateApplication();

int main(int argc, char** argv)
{
	Helios::Log::Init();
	HL_CORE_WARN("Initialized Log!");
	char a = 'a';
	HL_CLIENT_INFO("Hello! Var={}", a);

	auto app = Helios::CreateApplication();
	app->Run();
	delete app;
}

#endif