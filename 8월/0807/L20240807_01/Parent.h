#pragma once
#include <iostream>

class Parent
{
public:
	Parent();
	~Parent();

	inline int GetMoney()
	{
		return Money;
	}

	void SetMoney(int NewMoney)
	{
		if (NewMoney > 0)
		{
			Money = NewMoney;
		}
	}

	virtual void Investment()
	{
		srand((unsigned int)(time(nullptr)));
		Money = (rand() % 10) == 1 ? Money * 2 : 0;
	}

protected:
	int Money;

};

