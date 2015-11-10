using System;

class Program
{
    enum Importance
    {
	None,
	Trivial,
	Regular,
	Important,
	Critical
    };

    enum Temperature : byte
    {
            Low,
            Medium,
            High,
    };

    static void Main()
    {
	
	Importance value = Importance.Critical;

	Console.WriteLine("prueba valor ++ " + value++);
	if (value == Importance.Trivial)
	{
	    Console.WriteLine("Not true");
	}
	else if (value == Importance.Critical)
	{
	    Console.WriteLine("True");
	    Console.WriteLine (value);//convertir to string
	    int val = (int)value;//para recuperar el valor 
    	Console.WriteLine("Importance value is.." + val);
	}
	/*
	Puede especificar otro tipo numérico integral mediante el uso de dos puntos.
	La siguiente enumeración declarar como byte,
	puede verificar los valores numéricos subyacentes por convertir al tipo de subyacente.
	*/
	

        Temperature value1 = Temperature.Medium;
    	byte val1 = (byte)value1;
    	Console.WriteLine("Temperature value is.." + val1);
    	

    	Temperature prueba = (Temperature)0;
		Console.WriteLine("Tempetatura is..." + prueba);


		//Podemos castear hacia un string
		string[] values = Enum.GetNames(typeof(Importance));
    	foreach(string s in values)
        Console.WriteLine(s);
    }
}

/*
Enumeraciones son fuertemente tipados constantes
 de lo que hace el código más legible y menos propenso a errores.
 Enumeraciones son fuertemente tipados constantes de lo que hace el código más legible y menos propenso a errores.
*/

 /*
 Puede asignar cualquier valor a los elementos de la lista enumerador de un tipo enumeración.
  Por defecto, el primer miembro de una enumeración toma el valor de cero. Si este valor no tiene sentido para su enumeración, puede cambiar a uno u otro número.
  Si se declara un valor diferente en el primer miembro de Enum
  entonces asignar la siguiente mayor valor por uno que la del miembro inmediatamente anterior
   enum Days
    {
        Sunday = 1,
        TuesDay = 2,
		wednesday=3
    }
	//get value
	int day = (int)Days.TuesDay;
  */