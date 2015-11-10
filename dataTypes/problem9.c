#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nombre, apellido, apodo;
} datos;

typedef struct {
	char nombre, apellido, apodo;
} datos2;




int main(int argc, char const *argv[])
{
	datos = datos2;
	return 0;
}