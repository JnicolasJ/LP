#include <iostream>

using namespace std;

int main()
{
	int w = 10, x = 20 , y = 30, z = 40;

	cout<< w + z + x + y <<endl;
	cout<< z + y + w +x <<endl;
	//asociatividad i<uqierda derecha la misma precedencia

	cout<< w + z - x  + y <<endl; 
	cout<< z - x + w + y <<endl; 
	/*Claro ejemplo de la asociatividad comenzando por la izquierda
	cabe decir que la suma y resta tienen la misma precedencia
	*/

	cout<< w * z + x + y <<endl;
	cout<< x + y + w * z <<endl;
	/*
	Resultado es ya que la multiplicacion tiene mas precedencia que la suma
	*/

	cout<< w * z - x <<endl;
	cout<< x - w * z <<endl;
	/*
	380 multiplicacion gana a la resta
	-380 multiplicacion efectua antes que la resta mayor precedencia
	*/

	cout<< w * x * y / z <<endl;
	cout<< y / z * w * x <<endl;
	/*
	resultados son distintos lo que indica que tienen la misma precedencia multiplicacion y division
	*/

	cout<< (z > w < x )<<endl;
	cout<< (x > w < z )<<endl;
	/*
	En los operadores de desilgualdad da el mismo resultado es decir se efectua de izquierda a derecha 
	
	*/

	cout<< (false && true) <<endl;
	//se origina un corto circuito resultado 0 existiendo un false con un && 

	cout<< (true && true || false) <<endl;
	// resultado verdadero por existit el or
/*
 1.- Paréntesis

2.- Potencias y raíces

3.- Multiplicaciones y divisiones

4.- Sumas y restas

5.- Dos o más de la misma jerarquía u orden, entonces resolver de izquierda a derecha 
*/
	return 0;
}