/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Para std::cout, std::endl

int main() {
    int variable = 20;    // Una variable entera normal
    int *puntero;         // DECLARACIÓN de un puntero a un entero

    // ASIGNACIÓN: 'puntero' ahora guarda la dirección de 'variable'
    puntero = &variable;  

    std::cout << "--- Información de 'variable' ---" << std::endl;
    std::cout << "Valor de 'variable': " << variable << std::endl;
    std::cout << "Direccion de 'variable' (&variable): " << &variable << std::endl;

    std::cout << "\n--- Informacion de 'puntero' ---" << std::endl;
    std::cout << "Contenido de 'puntero' (la direccion que guarda): " << puntero << std::endl;
    std::cout << "Direccion donde esta guardado el propio 'puntero' (&puntero): " << &puntero << std::endl;
    
    std::cout << "\n--- Accediendo al valor A TRAVES del puntero ---" << std::endl;
    std::cout << "Valor al que apunta 'puntero' (*puntero): " << *puntero << std::endl; // DEREFERENCIA

    // Modificando 'variable' A TRAVÉS del puntero
    std::cout << "\n--- Modificando a traves del puntero ---" << std::endl;
    *puntero = 30; // Ve a la dirección que guarda 'puntero' y cambia el valor allí a 30
    std::cout << "Nuevo valor de 'variable' (despues de *puntero = 30): " << variable << std::endl;
    std::cout << "Nuevo valor apuntado por 'puntero' (*puntero): " << *puntero << std::endl;

    return 0;
}