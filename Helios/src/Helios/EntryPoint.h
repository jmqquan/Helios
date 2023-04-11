#pragma once

#ifdef HL_PLATFORM_WINDOWS

extern Helios::Application* Helios::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Helios::CreateApplication();
	app->Run();
	delete app;
}

#endif