with Ada.Text_IO; use Ada.Text_IO;
procedure Hello is
begin
  
  int a = 5;
  int b = 6;
  float x = a/b;

  Put_Line (x);
end Hello;

//Lenguaje ada es fuertemente tipado de manera estatica
/*Un compilador puede usar el tipo estático de un valor para optimizar el almacenamiento que necesita y la elección de los algoritmos para las operaciones sobre ese valor. Por ejemplo, en muchos compiladores de C el tipo de dato "flotante" se representa en 32 bits, de acuerdo con la especificación IEEE para los números de coma flotante de simple precisión. Entonces, C usa operaciones específicas de coma flotante sobre estos valores (suma de coma flotante, multiplicación, etc.).

El rango del tipo de dato limita y la forma de su evaluación afecta en el "tipado" del lenguaje. Además, un lenguaje de programación puede asociar una operación concreta con diferentes algoritmos para cada tipo de dato en el caso del polimorfismo. La teoría de tipos de datos es el estudio de los sistemas de tipificación, aunque los sistemas de tipos de datos concretos de los lenguajes de programación se originaron a partir de los problemas técnicos de las arquitecturas del ordenador, implementación del compilador y diseño del lenguaje.
*/

/*
En los lenguajes estáticamente tipados se le asigna el tipo a la caja. Es como si en la caja, pusieramos una etiqueta: "esta caja sólo puede contener zapatos". A partir de ese momento, en esa caja sólo se pueden meter zapatos, hasta que la caja sea destruida.*/
