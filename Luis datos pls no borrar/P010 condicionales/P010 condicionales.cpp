// P010 condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Luis disdem

#include <iostream>
#include <string>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool seguir = true;
    char correo;
    char contraseña;
    int contraseña_de_recuperacion = 0;
    int opc = 0;

    std::cout << "Que opción deseas realizar? \n1.- ingresar correo\n2.- Establecer contraseña\n" <<
        "3.- contraseña de recuperacion \n";
    switch (opc)
    {
    case 1:
        std::cout << "Ingresa el correo\n";
        std::cin >> correo;
        break;
    case 2:
        std::cout << "ingrea la contraseña\n" <<
        "La contraseña debe contener una mayúscula y un número\n";
        std::cin >> contraseña;
        break;
    case 3: 
        std::cout << "Establece la contraseña de recuperacion\n";
        std::cin >> contraseña_de_recuperacion; 
        break;
    default:
        std::cout << "Esa opción no la conozco\n";
    }














}

