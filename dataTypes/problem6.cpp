#include <iostream>

using namespace std;

enum colores
{

	rojo,
	azul,
	amarillo,
	verde,
	dorado,
	mostaza,
	violeta
};

int main()
{
	colores color;
	for(color=rojo;color<6;color++)
	{
		if(color == verde)
			cout<<"el color es verde"<<endl
		else
			cout<<"no es verde"<<endl;
	}


	return 0;
}