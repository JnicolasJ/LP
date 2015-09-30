#include <iostream>
#include <string>


using namespace std;
int x;//variable global
void funcion()
{
       	cout<<x<<endl;
	x = 21;//modificacion de la variable global
	cout<<x<<endl;
	int x;//instanciacion de nueva variable local dentro de la funcion
	cout<<x<<endl;
	x = 42;//la funcion reconocera la variable instanciada dentro de su ambito dejando de lado a la variable global
	cout<<x<<endl;
	cout<<::x<<endl;//]:: para acceder a la variable global
}

int main()
{	
  funcion();	

  return 0;
}

