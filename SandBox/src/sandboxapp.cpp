#include <Helios.h>

class SandBox : public Helios::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Helios::Application* Helios::CreateApplication()
{
	return new SandBox();
}
