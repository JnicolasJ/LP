 
#include <stdio.h>
int main (int argc, char * argv[]) {
int choice;
while ( choice != 7 ) {
       printf ("\nMAIN MENUE\n1.ADD INTEGER AND FLOAT, \
              STORE IT IN FLOAT.\n2.ADD INTEGER AND FLOAT, \
              STORE IT IN INTEGER.");
       printf ("\n3.ADD INTEGER TO CHARACTER, \
              STORE IT IN INTEGER.\n4.ADD INTEGER TO CHARACTER, \
              STORE IT IN CHARACTER.");
       printf ("\n5.ADD FLOAT TO CHARACTER, \
              STORE IT IN FLOAT.\n6.ADD FLOAT TO CHARACTER, \
              STORE IT IN CHARACTER. \n7 MODULE. \n8.Exit.\n==>");
scanf ("%d", & choice );
       switch ( choice ) {
       int    a, b;
              float c, d;
              char   e, f;
       case 1:       a=10;
                     c=5.3;
                     d=a+c;
                     printf ("\n%d + %1.1f = %1.1f", a,c,d);break;
       case 2:       a=10;
                     c=5.3;
                     b=a+c;
                     printf ("\n%d + %1.1f = %d", a,c,b);break;
       case 3:       a=10;
                     e='A';
                     b=a+e;
                     printf ("\n%d + %c = %d", a,e,b);break;
       case 4:       a=10;
                     e='A';
                     f=a+e;
                     printf ("\n%d + %c = %c", a,e,f);break;
       case 5:       c=9.7;
                     e='L';
                     d=c+e;
                     printf ("\n%1.1f + %c = %1.1f", c,e,d);break;
       case 6:       c=9.7;
                     e='L';
                     f=c+e;
                     printf ("\n%1.1f + %c = %c", c,e,f);break;
       /*
       case 7:       
                     a = 10;
                     c = 2.3;
                     b = a%c;

                     printf ("\nModule");
                     printf("%s\n",b );       
                     break;
       */
       case 8:       printf("Out\n");
                     break;
       
       default :     printf ("\ninvalid number\n");break;
       }        
    }
}