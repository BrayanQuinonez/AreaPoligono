/*
 * Crea una �nica funci�n (importante que s�lo sea una) que sea capaz
 * de calcular y retornar el �rea de un pol�gono.
 * - La funci�n recibir� por par�metro s�lo UN pol�gono a la vez.
 * - Los pol�gonos soportados ser�n Tri�ngulo, Cuadrado y Rect�ngulo.
 * - Imprime el c�lculo del �rea de un pol�gono de cada tipo.
 */

#include <iostream>
#include <wchar.h> //Librer�a que incluye un soporte para amplios tipos de caracteres
#include <locale.h> //Librer�a reglas culturales e idiom�ticas que abarcan aspectos tales como el idioma  usado  para  mensajes, diferentes  juegos  de  caracteres, convenios  lexicogr�ficos, etc.

int main()
{
    //Primero defino las variables que van a almacenar los datos necesarios para calcular el �rea.
    double base = 10;//Declaramos las variables desde el inicio
    double height = 5;
    int type = 2;
    double AreaTriangle = (base * height) / 2;
    double AreaCube = base * height;

    setlocale(LC_ALL, ""); //Funci�n que nos permitira usar en nuestro programa distintos tipos de caracteres que no pertenezcan al "estandar", que se puede imprimir normalmente.

    std::cout << "----PROGRAMA PARA HALLAR �REA DE UN POL�GONO----" << std::endl;

    std::cout << "          Tipos de pol�gono admitidos                 " << std::endl; //Mostramos al usuario los tipos de pol�gono para que el elija posteriormente
    std::cout << "    1. Tri�ngulo - 2. Cuadrado - 3. Rect�ngulo  " << std::endl;

    if (type == 1) //1 es igual a tri�ngulo
        std::cout << "El �rea de tu tri�ngulo es: " << AreaTriangle << std::endl;

    else if (type == 2 || type == 3)//Si es cuadrado o rect�ngulo hacer lo siguiente
        std::cout << "El �rea de tu cuadrado/rect�ngulo es: " << AreaCube << std::endl;

    std::cout << "\n\nPress any key to go back to Menu..." << std::endl;

    return 0;
}

