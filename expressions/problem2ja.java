public class problem2ja{

	static int fun(int k) 
	{
		k += 4;
		return 3 * k - 1;
	}
// no hya punteros en java
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