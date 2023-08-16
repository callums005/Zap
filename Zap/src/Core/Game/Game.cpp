#include "Game.h"

namespace Zap
{
	Game::Game() {}

	Game::~Game() {}

	void Game::Run()
	{
		OnStart();

		while (true)
		{
			OnUpdate();
		}

		OnExit();
	}
}