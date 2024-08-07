#include <iostream>

using namespace std;
// 월드 생성 10*10(배열로 공간 생성) > 월드 안에 벽과 바닥 생성(벽 객체, 바닥)
// > 월드 안에 플레이어 몬스터 목적지 생성(플레이어,몬스터객체 생성)
// > 플레이어와 몬스터가 이동(플레이어가 목적지 갈 때 까지 반복)(객체가 바닥(빈 공간) 배열에 )
// > 목적지(바닥 상속)에 플레이어 가면 끝
class World
	// 공간 만들기, 월드 내의 존재하는 함수.
{
public:
	world()
	{
		
	}

	int Worldspace[10][10];
	virtual void exist();

};


// wall과 floor 가 다른 조건(상태)으로 되어 있어야함.
class Wall : public World
	// 벽이라는 객체가 월드 내의 존재하게 함.(배열내에서 공간 차지.)
{
	
	exist override
};

class floor : public World
	// 바닥이 월드 내에 존재하게함. 
{
	
};




class actor : public floor
	// 움직일수 있는(배열내에서 data 이동),floor에서만 이동가능하게하기위해 floor 상속
{
public:
	// 좌표값이 필요.
	actor()
	{

	};
	exist override


	void movement() // floor 에서 다른 floor로 데이터 이동 
	{

	};
	void cantmove()
	{

	}
};


class Goal : public floor
{
	//배열내의 특정한 floor의 좌표(주소값) 1개 가져오기
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
		}// 객체가 움직이는 함수 반복, player와 monster가 이동 player가 Gaol에 이동하면 끝
	};
};




int main()
{
	actor* player; // 객체 생성
	actor* monster; // 객체 생성
	Game game;
	
	

	game.play(player,monster);


	return 0;
}