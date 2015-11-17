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
LO que demuestra que se esta operando de izquierda a derecha
y de derecha a izquierda
*/
