public class problem4{
	static int fun(int k) 
	{
		System.out.println("derecha");
		return 3 * k - 1;
	}

	static int fun2(int k)
	{
			System.out.println("izquierda");
			return 1 - 3 * k;
	}

	public static void main(String[] args)
	{

		int a = 10;
		int sum1 = fun(a) + fun2(a);
		
		System.out.println(" valor de fun es: " + sum1);
		


		a = 10;
		sum1 = fun2(a) + fun(a);
	
		System.out.println(" valor de fun es: " + sum1);

		int b = a +fun(a);
		System.out.println(" valor  es: " + b);		

		b = fun(a)+ a;
		System.out.println(" valor  es: " + b);		

		
		
	}
}

/*
En este ejemplo podemos ver que  los operadores en java se ejecutan de izquierda a derecha

*/