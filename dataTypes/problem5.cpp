#include <iostream>

using namespace std;

enum Colores{rojo, azul, amarillo, verde, plateado, dorado, naranja, morado};

int main ()
{
	Colores color;
	cout<<"tipo enum creado correctamente"<<endl;
	//PRIMERO
	color = rojo;

	if(color != amarillo)
		cout<<"el color  no es amarillo"<<endl;
	else
		cout<<"el color es amarillo"<<endl;

	cout<<"color = "<<color<<endl;
	color = plateado;
	cout<<"color = "<<color<<endl;
	cout<<color * 2<<endl;

	return 0;
}

/*El tipo enum de c++ es heredado del lenguaje C
En esencia, tipos enumerados proporcionan un nombre simbólico para representar un estado de una lista de estados.
*/
/*
PRIMERO: 
// CORRECT: 
 
          if ( my_security_level == secret ) ... 
 
// INCORRECT: 
 
          if ( ! strcmp(my_security_level,secret) ) ... 
 
// ALSO INCORRECT: 
 
          if ( ! strcmp(my_security_level,"secret") ) ... 

*/
/*
Operaciones ilegales
color ++;
color --;
color + 2;
color - 5;
color = 4;
color += 5;
color -= 5;
color = color * 2;
color = color / 2;
Colores[1] = mango;
Colores::amarillo = 6;
*/
/*
Operaciones
enum Colores{rojo=1, azul, amarillo, verde, plateado, dorado, naranja, morado};
	comenzara rojo 1, azul 2 crecientemente, al contrario del default que empezaria desde el indice 0
enum Colores{rojo=1, azul, amarillo, verde, plateado, dorado, naranja, morado=1};
	en este caso el color rojo y el morado tendran el mismo valor 1
*/

