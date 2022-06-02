#include <iostream>
#include <cassert>
#include <string>
#include <cstring>

using namespace std::literals;

int main ()
{
    /* Tipo de dato: BOOL
    Lo representamos matematicamente con 2 valores, los cuales son, verdadero y falso.
    */
   assert(true);
   assert(false or true);
   assert(true and false == false);
   assert(true and true);
   assert(false or false == false);
   assert(not false);
   assert(false != true and true != false);
   assert(not false == true);
   assert(not true == false);
   assert(true == true);
   assert(false == false);
   assert(true == (not false == true) and false or true);
   
   /* Tipo de dato: INT
   Es el conjunto de valores el cual representamos matematicamente en los numeros enteros (Z)
   */
   assert(4 == 2 + 2); // Suma
   assert(6 != 4 + 4); // Resta
   assert(4 >= 3); // Mayor o igual
   assert(5 <= 6); // Menor o igual
   assert(20 == 4 * 5); // Multiplicacion
   assert(5 == 10 / 2); // Division
   
   /* Tipo de dato: DOUBLE
   Es el conjunto de valores el cual representamos en los numeros reales (R)
   */
   assert(5.0 - 5.0 == 0.0); // Resta
   assert(4.0 + 5.0 == 9.0); // Suma
   assert(6.5 != 4.7 + 8.3); // Diferencia
   assert(20.0 >= 15.0); // Mayor o igual
   assert(30.0 <= 50.5); // Menor o igual
   assert(50.0 == 5.0 * 10.0); // Multiplicacion
   assert(60.0 == 120.0 / 2.0); // Division
   assert(0.6 != 0.2 + 0.2 + 0.2);

   /* Tipo de dato: CHAR
   Es el conjunto de valores en el que se encuentran todos los caracteres disponibles de la tabla ASCII (2^8 = 255 + 00) -> 256 posibles caracteres
   */
   assert('A' == 'A'); // Igualdad
   assert('A' != 'B'); // Diferencia (Valor de A=65 distinto de B=66)
   assert('B' <= 'C'); // Menor o igual (Valor de B=66 menor de C=67)
   assert('D' >= 'C'); // Mayor o igual (Valor de D=68 mayor a C=67)
   assert('A' != 'a'); // Diferencia de valores MAYUSCULAS != minusculas (A=65 diferente de a=97)
   assert(140 == 'F' + 'F'); // Suma (Valor de F=70)
   assert(70 == 'x' - '2'); // Resta (Valor de x=120 - valor de 2(caracter)=50)
   assert('6' != '3' + '3'); // En este tipo de dato 6 no es igual a 3+3, debemos ver su valor de caracter (6=54 y 3=51)

   /* Tipo de dato: STRING
   Es un tipo de dato compuesto formado por caracteres. A diferencia del tipo de dato anterior (CHAR), se expresa en comillas 
   */

  // s para string
  assert("A"s == "A"s); // Igualdad
  assert("B"s != "A"s); // Diferencia
  assert("gonzalez"s == "gon"s + "zalez"s); // Igualdad (La suma de caracteres (8))
  assert(8 == "gonzalez"s.length()); // Funcion miembro length()
  assert("aaa"s >= "aa"s); // Mayor o igual
  assert("1" <= "2"); // Menor o igual

  /* Tipo de dato: UNSIGNED
    Es el conjunto de valores que representamos matematicamente en los numeros naturales (N) 
    */

   // u para unsigned
   assert(0u == 0u);
   assert(7u == 3u + 4u);
   assert(999 == 998 + 1);
   assert(1400 <= 1500);
   assert(8000 >= 1000);

   


    std::cout << "Todo perfecto :)";



}