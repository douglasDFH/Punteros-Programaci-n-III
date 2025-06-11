#include <iostream> // Para std::cout, std::endl
#include <string>   // Para std::string

// Versión 1: Suma dos enteros
int sumar(int a, int b) {
    std::cout << "Ejecutando sumar(int, int)... ";
    return a + b;
}

// Versión 2: Suma dos números de punto flotante (double)
// Sobrecargada: mismo nombre, diferente tipo de parámetros.
double sumar(double a, double b) {
    std::cout << "Ejecutando sumar(double, double)... ";
    return a + b;
}

// Versión 3: Concatena dos cadenas (std::string)
// Sobrecargada: mismo nombre, diferente tipo de parámetros.
std::string sumar(const std::string& a, const std::string& b) {
    std::cout << "Ejecutando sumar(const std::string&, const std::string&)... ";
    return a + b;
}

// Versión 4: Suma tres enteros
// Sobrecargada: mismo nombre, diferente número de parámetros.
int sumar(int a, int b, int c) {
    std::cout << "Ejecutando sumar(int, int, int)... ";
    return a + b + c;
}

int main() {
    // Llama a sumar(int, int)
    std::cout << "Suma de enteros (5, 3): " << sumar(5, 3) << std::endl;

    // Llama a sumar(double, double)
    std::cout << "Suma de doubles (5.5, 3.3): " << sumar(5.5, 3.3) << std::endl;

    // Llama a sumar(const std::string&, const std::string&)
    std::cout << "Concatenación de strings (\"Hola, \", \"Mundo!\"): " 
              << sumar(std::string("Hola, "), std::string("Mundo!")) << std::endl;

    // Llama a sumar(int, int, int)
    std::cout << "Suma de tres enteros (1, 2, 3): " << sumar(1, 2, 3) << std::endl;
    std::cout << "problema resuelto Douglas Flor Hernandez  sobrecarga de datos ";

    return 0;
}