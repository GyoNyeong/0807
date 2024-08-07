#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>
#include <random>

using namespace std;


//혼자 개발하지 않는다.
//남을 믿으면 안됨.
int main()
{
	srand(time(nullptr));

	int GoblinCount = rand() % 6;
	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;
	int TotalMonsterCount = rand() % 10;

	vector<AGoblin*> Goblins;
	vector <ASlime*> Slimes;
	vector<ABoar*> Boars;

	//AGoblin* Goblins[6]{};
	//ASlime* Slimes[6]{};
	//ABoar* Boars[6]{};


	vector<AActor*>Actors;

	Actors.push_back(new APlayer());

	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins.push_back(new AGoblin);
	}

	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes.push_back(new ASlime);
	}

	for (int i = 0; i < BoarCount; i++)
	{
		Boars.push_back( new ABoar);
	}

	for (int i = 0; i < Actors.size(); ++i)
	{
		APlayer* Player = dynamic_cast<APlayer*>(Actors[i]);
		if (Player)
		{
			Player->Attack();
		}
		Actors[i]->Move();
	}


	//for (int i = 0; i < GoblinCount; i++)
	//{
	//	Goblins[i]->Move();
	//}

	//for (int i = 0; i < SlimeCount; i++)
	//{
	//		Slimes[i]->Move();
	//}

	//for (int i = 0; i < BoarCount; i++)
	//{
	//		Boars[i]->Move();
	//}





	for (int i = 0; i < Goblins.size(); ++i)
	{
		delete Goblins[i];
	}

	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}

	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];
	}

	Goblins.clear();
	Slimes.clear();
	Boars.clear();


		return 0;
}
