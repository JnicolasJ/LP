using System;


class Program
{
	static int fun(ref int k) {//ref indica pasar parametro por referencia
        k += 4;
        return 3 * k - 1;
    }


     static void Main()
    {
        int i = 10, j = 10, sum1, sum2;
        sum1 = (i / 2) + fun(ref i);//utilizando palabra reserva ref
        sum2 = fun(ref j) + (j / 2);
        System.Console.WriteLine("sum1: {0}", sum1);
        //total 46
        System.Console.WriteLine("sum2: {0}", sum2);
        //total 48
    }
}