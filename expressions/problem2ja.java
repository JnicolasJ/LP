public class problem2ja{

	static int fun(int k) 
	{
		k += 4;
		return 3 * k - 1;
	}
// no hay parametro por referencia  en java
	public static void main(String[] args)
	{
		int i = 10, j = 10, sum1, sum2;
		sum1 = (i / 2) + fun(i);
		//i/2 = 5 + resultado de fun: 41
		//total 46
	
		sum2 = fun(j) + (j / 2);
		//modifica j a 14 pero no lo guarda el resultado es 46
		System.out.println(" valor de sum1 es: " + sum1);
		System.out.println(" valor de sum2 es: " + sum2);
		
	}
}
/*
Paso por valor significa que cuando un argumento se pasa a una función, 
la función recibe una copia del valor original. Por lo tanto, si la función modifica el parámetro
, sólo la copia cambia y el valor original permanece intacto.

Paso por referencia significa que cuando un argumento se pasa a una función,
 la función recibe la dirección de memoria del valor original, no la copia del valor. 
 Por lo tanto, si la función modifica el parámetro, el valor original en el código que llamó a la función cambia.
*/

 //Java hace paso parametros por valor solo manda la copia de la referencia
 //UNa solucion seria crear un objeto que contenga el metodo obtenerDato para asi poder modificarlo 