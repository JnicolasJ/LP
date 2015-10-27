#include<stdio.h>
	#include<stdlib.h>

	int main ()
	{
		int * buffer;

		printf("tam buffer= %ld \n",sizeof &buffer); 
		
		buffer = (int*) malloc (10*sizeof(int));
		/*La función malloc sirve para solicitar un bloque de memoria del tamano
		 suministrado como parámetro. 
		Devuelve un puntero a la zona de memoria concedida*/
		printf("tam nuevo buffer= %ld \n",sizeof &buffer); 
		
		free (buffer);

/*
void free (void* ptr);

ptr es un puntero de cualquier tipo que apunta a un área de memoria reservada previamente con malloc.
Si ptr apunta a una zona de memoria indebida, los efectos pueden ser desastrosos, igual que si se libera dos veces la misma zona. 

*/
		return 0;
	}