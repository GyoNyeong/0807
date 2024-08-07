#include <iostream>
#include "Parent.h"
#include "Child.h"

using namespace std;

//int argc, char* argv[]
//entry point
int main()
{
	//Parent P;
	Parent* P = new Child();
	P->SetMoney(100);
	cout << P->GetMoney() << endl;

	Child C;
	C.SetMoney(100);
	cout << C.GetMoney() << endl;
	C.Investment();
	cout << C.GetMoney() << endl;



	return 0;
}