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



//						����						���
//public				�ƹ��볪 ����				���
//protected				�ڽĸ�					���
//private				