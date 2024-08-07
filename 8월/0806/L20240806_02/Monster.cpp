#include "Monster.h"
#include <iostream>

using namespace std;

AMonster::AMonster()
{
	cout << "Monster 생성자" << endl;
}

AMonster::~AMonster()
{
	cout << "Monster 소멸자" << endl;
}

void AMonster::Move()
{
	cout << "Monster 이동" << endl;
}
