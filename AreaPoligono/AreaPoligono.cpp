/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */

#include <iostream>
#include <wchar.h> //Librería que incluye un soporte para amplios tipos de caracteres
#include <locale.h> //Librería reglas culturales e idiomáticas que abarcan aspectos tales como el idioma  usado  para  mensajes, diferentes  juegos  de  caracteres, convenios  lexicográficos, etc.

int main()
{
    //Primero defino las variables que van a almacenar los datos necesarios para calcular el área.
    double base = 10;//Declaramos las variables desde el inicio
    double height = 5;
    int type = 2;
    double AreaTriangle = (base * height) / 2;
    double AreaCube = base * height;

    setlocale(LC_ALL, ""); //Función que nos permitira usar en nuestro programa distintos tipos de caracteres que no pertenezcan al "estandar", que se puede imprimir normalmente.

    std::cout << "----PROGRAMA PARA HALLAR ÁREA DE UN POLÍGONO----" << std::endl;

    std::cout << "          Tipos de polígono admitidos                 " << std::endl; //Mostramos al usuario los tipos de polígono para que el elija posteriormente
    std::cout << "    1. Triángulo - 2. Cuadrado - 3. Rectángulo  " << std::endl;

    if (type == 1) //1 es igual a triángulo
        std::cout << "El área de tu triángulo es: " << AreaTriangle << std::endl;

    else if (type == 2 || type == 3)//Si es cuadrado o rectángulo hacer lo siguiente
        std::cout << "El área de tu cuadrado/rectángulo es: " << AreaCube << std::endl;

    std::cout << "\n\nPress any key to go back to Menu..." << std::endl;

    return 0;
}

