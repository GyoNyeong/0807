#include <iostream>

using namespace std;
// ���� ���� 10*10(�迭�� ���� ����) > ���� �ȿ� ���� �ٴ� ����(�� ��ü, �ٴ�)
// > ���� �ȿ� �÷��̾� ���� ������ ����(�÷��̾�,���Ͱ�ü ����)
// > �÷��̾�� ���Ͱ� �̵�(�÷��̾ ������ �� �� ���� �ݺ�)(��ü�� �ٴ�(�� ����) �迭�� )
// > ������(�ٴ� ���)�� �÷��̾� ���� ��
class World
	// ���� �����, ���� ���� �����ϴ� �Լ�.
{
public:
	world()
	{
		
	}

	int Worldspace[10][10];
	virtual void exist();

};


// wall�� floor �� �ٸ� ����(����)���� �Ǿ� �־����.
class Wall : public World
	// ���̶�� ��ü�� ���� ���� �����ϰ� ��.(�迭������ ���� ����.)
{
	
	exist override
};

class floor : public World
	// �ٴ��� ���� ���� �����ϰ���. 
{
	
};




class actor : public floor
	// �����ϼ� �ִ�(�迭������ data �̵�),floor������ �̵������ϰ��ϱ����� floor ���
{
public:
	// ��ǥ���� �ʿ�.
	actor()
	{

	};
	exist override


	void movement() // floor ���� �ٸ� floor�� ������ �̵� 
	{

	};
	void cantmove()
	{

	}
};


class Goal : public floor
{
	//�迭���� Ư���� floor�� ��ǥ(�ּҰ�) 1�� ��������
};



class Game
{
public:
	actor* player;
	actor* monster;

	Game()
	{

	};

	void play(actor* player, actor* monster)
	{
		for ()
		{
		}// ��ü�� �����̴� �Լ� �ݺ�, player�� monster�� �̵� player�� Gaol�� �̵��ϸ� ��
	};
};




int main()
{
	actor* player; // ��ü ����
	actor* monster; // ��ü ����
	Game game;
	
	

	game.play(player,monster);


	return 0;
}