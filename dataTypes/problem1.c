#include <stdio.h>

int main (int argc, char * argv[]) {

     int x = 5;

     long int y= 973562454554,z;

 

     z = x;

     x = y;

        

     printf("the value of z= %ld \n the value of x= %d", z, x);  
        

//es compatible la asignacion de un int hacia un long int pero no al revez
     return 0;

} 