#include <iostream>

using namespace std;

int fun1()
{

	cout<<"ejecutando fun 1"<<endl;
	return 1;
}

int fun2()
{

	cout<<"ejecutando fun 2"<<endl;
	return 2;
}

int fun3(int a, int b)
{

	cout<<"ejecutando fun 3"<<endl;
	return a + b;
}

int main()
{
	
	cout<<  fun3( fun1(),fun2() );
	return 0;
}
/*
se calculo primero fun2
luego calculo fun 1
al final fun 3
*/
//LO que cabe decir que los argumentos se evaluaron de derecha a izquierda