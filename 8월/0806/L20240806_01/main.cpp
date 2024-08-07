#include <iostream>

using namespace std;

int main()
{
	//int* p = new int;
	//// int와 int*는 관계가 없다.(메모리의 위치값을 기억하고 얼마나 가져와서 사용할건지(자료형)으로 표현),실행중에 메모리 사이즈를 변경하기위해

	//cout << new int << endl;

	//delete p;

	//int Size = 10;


	//int* Korean = new int[Size];


	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << Korean[i] << endl;
	//}

	//Size++;


	//int* Temp = new int[Size];

	//for (int i = 0; i < 10; ++i)
	//{
	//	Temp[i] = Korean[i];
	//}
	//delete[] Korean;
	//
	//Korean = Temp;

	float a = 1.1;

	cout << (int)a << endl;



	// point 쓰면 메모리 관리를 해줘야한다
	// 자료구조 : 메모리에 저장된 data에 접근 하는 방법을 구조적으로 짜는 것
	return 0;
}