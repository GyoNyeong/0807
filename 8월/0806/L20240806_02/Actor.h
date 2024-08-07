#pragma once
class AActor
{
public: //interface
	AActor();
	~AActor();

	void Move();
	int GetHp()
	{
		return Hp;
	}
	void SetHp(int NewHp)
	{
		if (NewHp >= 0)
		{
			Hp = NewHp;
		}
	}
protected:
//private: 

	int Hp;
};



//						접근						상속
//public				아무대나 접근				상속
//protected				자식만					상속
//private				