#pragma once
#include "../PCH.h"

namespace Zap
{
	class Game
	{
	public:
		Game();
		virtual ~Game();

		void Run();

		virtual void OnStart() = 0;
		virtual void OnUpdate() = 0;
		virtual void OnExit() = 0;
	};

	Game* CreateGame(); // This is implemented on the Game Project side - allowing the user to define their own Game class. 
}
