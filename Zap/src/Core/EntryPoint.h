#pragma once
#include "PCH.h"

#include "Game/Game.h"

extern Zap::Game* Zap::CreateGame();

int main(int argc, char* argv[])
{
	Zap::Game* app = Zap::CreateGame();
	app->Run();
	delete app;

	return 0; // Return no error state
}