#include <stdio.h>

int main (int argc, char * argv[]) {
//que clase de tipos primitivos se pueden mezclar
	printf("1.- mezclando tipos  int - long int\n");
     int x = 5;
     long int y= 973562454554,z;
     z = x;

     x = y;

     printf("el valor de  z= %ld \nel valor de  x= %d", z, x); 
     printf("\n");       

//es compatible la asignacion de un int hacia un long int pero no al revez
  printf("es compatible la asignacion de un int hacia un long int pero no al revez \n");  
  	printf("tipos double - float\n");
    double a = 3.145965932;
	float  c = 3.14, b;
 
	b = a;
	a = c;
 
	printf("el valor de b = %f\nel valor de a = %lf", b, a);
	printf("\n");       

    char aa = 'h';
    int da = 10 + a;
    printf("sumar tipos distintos %d",da);
    printf("\n"); 

    //  tipos punteros no son compatibles depende al tipo establecido
/*

    int tmp[10];
    int * ptr ; tmp;
    char* pt;
    pt =  ptr;
    */ 
     return 0;

} 