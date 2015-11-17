#include <stdio.h>
#include <stdlib.h>

int a;

int fun()
{
	a += 10;
	return a;
}

int main(int argc, char const *argv[])
{
	
	int b;
	a = 10;
	b = a + fun();
	printf("With the function call on the right, ");
	printf(" b is: %d\n", b);
	a = 10;
	b = fun() + a;
	printf("With the function call on the left, ");
	printf(" b is: %d\n", b);
	
	return 0;
}

/*El resultado para ambos casos es de 40
llamada a la funcion esta al mismo nivel de una operacion[la evaluacion de izquierda a derecha 
es la misma que la viceverza]
*/
