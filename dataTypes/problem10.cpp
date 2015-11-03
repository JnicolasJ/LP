/*En los lenguajes basados en C (C / C ++ y Java), la asignación es un operador que produce un resultado que es el mismo que el valor asignado. 
Tiene la asociatividad de derecha a izquierda.*/
#include <iostream>

using namespace std;

int main()
{
	int x,a,b;
	double y=12.56;
	double z=12.56;
	b = y;
	x = y+z;
	a = y*z;
	cout<<"valor de b: "<<b<<endl;
	cout<<"valor de a: "<<a<<endl;
	cout<<"valor de  x: "<<x<<endl;
	return 0;
}
