#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int ar[50][50];
void llenar()
{
	for(int i=0;i<50;i++)
	{
		for(int j=0;j<50;j++)
		ar[i][j]=1;
	}
}

void funcion()
{
	
	for(int i=0;i<50;i++)
	{
		for(int j=0;j<50;j++)
		ar[i][j];
	}
}

void funcion2()
{

	for(int i=0;i<50;i++)
	{
		for(int j=0;j<50;j++)
		*(ar+i+j);
	}
}

int main(int argc, char const *argv[])
{
	//llenar();
	float ini = clock();
	for(int i=0; i<100000;i++)
	{

		funcion();
	}
	float end = clock();

	cout<<"tiempo de la primera funcion"<<(end - ini) / ((double)CLOCKS_PER_SEC)<<endl;

	//llenar();
	float ini1 = clock();
	for(int i=0; i<100000;i++)
	{

		funcion2();
	}
	float end1 = clock();

	cout<<"tiempo de la segunda funcion"<<(end1 - ini1) / ((double)CLOCKS_PER_SEC)<<endl;
	
	return 0;
}

/*punteros heap dinamica de pila
tipo de dato que almacena direciciones de memoria
inicializamos el puntero con la primera direccion del ar
cuando hacemos la aritmetica de punteros al hace
puntero ++ lo que hacemos es ir a la siguiente direccion de memoria
luego con el operador *(puntero) accedemos al contenido de la direccion de memoria
los punteros son dinamicos
*/
/*
subindice arr[i] accedemos directamente al contenido de la celda de la memoria 
*/