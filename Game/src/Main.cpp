#include "Zap.h"

#include <stdio.h>

class Application : public Zap::Game
{
public:
	Application() {}
	~Application() {}

	void OnStart()
	{
		Zap::Debug::Log(Zap::DebugLevel::Log, "Log");
		Zap::Debug::Log(Zap::DebugLevel::Info, "Info");
		Zap::Debug::Log(Zap::DebugLevel::Warn, "Warn");
		Zap::Debug::Log(Zap::DebugLevel::Error, "Error");
		Zap::Debug::Log(Zap::DebugLevel::Critical, "Critical");
	}

	void OnUpdate()
	{

	}

	void OnExit()
	{

	}
};

Zap::Game* Zap::CreateGame()
{
	return new Application();
}