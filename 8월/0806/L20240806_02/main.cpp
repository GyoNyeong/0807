#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"


using namespace std;


//혼자 개발하지 않는다.
//남을 믿으면 안됨.
int main()
{
	APlayer* Player = new APlayer;

	cout << Player->GetHp() << endl;

	delete Player;

	return 0;
}
