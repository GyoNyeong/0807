#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"


using namespace std;


//ȥ�� �������� �ʴ´�.
//���� ������ �ȵ�.
int main()
{
	APlayer* Player = new APlayer;

	cout << Player->GetHp() << endl;

	delete Player;

	return 0;
}
