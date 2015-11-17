#include <iostream>
#include <stdio.h>

using namespace std;


int fun(int *k) {
	*k += 4;
return 3 * (*k) - 1;
}

//funcion paso por valor

int main()
{
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i);
	//i/2 = 5 + resultado de fun: 41
	//total 46
	
	sum2 = fun(&j) + (j / 2);
	//esto es diferente ya que primero esta haciendo la modificacion a j = 14 y luego al realizar fun obtenemos 41 + 14/2 = 48
	printf("sum %i\n",sum1);

	printf("sum2 %i\n",sum2);
	return 0;
}
