#include <NEngine.h>

class SandboxApp : public NE::Application
{
public:
	SandboxApp();
	~SandboxApp();

private:

};

SandboxApp::SandboxApp()
{
	
}

SandboxApp::~SandboxApp()
{
}

NE::Application* NE::CreateApplication()
{
	return new SandboxApp();
}

