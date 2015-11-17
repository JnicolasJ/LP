using System;


class Program
{
	
     static int fun(int k) 
    {
    
        System.Console.WriteLine("derecha");    
        return 3 * k + 2;
    }

    static int fun2(int k)
    {

        System.Console.WriteLine("izquierda");    
        return 2 + k * 3;
    }

   

     static void Main()
    {
        int a = 10;
        int sum1;
        sum1 = fun(a) + fun2(a);
        System.Console.WriteLine("sum1: {0}", sum1);
        
        sum1 = fun2(a) + fun(a);
        System.Console.WriteLine("sum1: {0}", sum1);

/*
        int b = a + fun(a);
        System.Console.WriteLine("b->: {0}", b);        

        b = fun(a) + a;
        System.Console.WriteLine("b->: {0}", b);                
*/        
    }
}


/*
izquierda a derecha
*/
