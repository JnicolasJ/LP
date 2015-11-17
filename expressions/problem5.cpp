#include <iostream>

using namespace std;

 	int fun(int k) 
	{
		cout<<"derecha"<<endl;
		return 3 * k + 2; 
 	
	}
	int fun2(int k)
	{
			cout<<"izquierda"<<endl;
			return 2 + 3 * k;
	}

int main()
{
	int a = 10;
	int sum1 = fun(a) + fun2(a);
	cout<<"valor es: "<<sum1<<endl;

	sum1 = fun2(a) + fun(a);
	cout<<"valor es: "<<sum1<<endl;

	int b = a + fun(a);
	cout<<"valor es: "<<b<<endl;	
	b = fun(a) + b;
	cout<<"valor es: "<<b<<endl;	
	return 0;
}

/*
El resultado es que se ejecutan las expresiones de izquierda a derecha

*/