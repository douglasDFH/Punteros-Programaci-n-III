#include <iostream>

/*
 * Programa: Calculadora de Factorial (Versión Recursiva)
 * Realizado por: Douglas Flor Hernandez
 * Descripción: Calcula el factorial de un número usando recursión
 *              con mensajes detallados del proceso.
 */

/**
 * Función recursiva para calcular factorial
 * @param n Número para calcular factorial
 * @return Factorial de n (n!)
 */
long long factorial(int n) {
    std::cout << "Calculando factorial(" << n << ")..." << std::endl;
    
    // Caso Base
    if (n == 0 || n == 1) {
        std::cout << "  factorial(" << n << ") -> Caso Base! Retorna 1." << std::endl;
        return 1;
    }
    // Paso Recursivo
    else {
        std::cout << "  factorial(" << n << ") -> Paso Recursivo. Llama a factorial(" << n - 1 << ")." << std::endl;
        long long resultadoRecursion = factorial(n - 1); // ¡Auto-llamada!
        long long resultadoFinal = n * resultadoRecursion;
        
        std::cout << "  factorial(" << n << ") -> Retornando " << n << " * " 
                  << resultadoRecursion << " = " << resultadoFinal << std::endl;
        return resultadoFinal;
    }
}

int main() {
    // Encabezado del programa
    std::cout << "====================================" << std::endl;
    std::cout << "  CALCULADORA DE FACTORIAL (v1.0)  " << std::endl;
    std::cout << "  Realizado por: Douglas Flor Hernandez" << std::endl;
    std::cout << "====================================\n" << std::endl;
    
    int numero;
    std::cout << "Ingrese un numero para calcular su factorial: ";
    std::cin >> numero;
    
    // Validación de entrada
    if (numero < 0) {
        std::cerr << "\nError: El factorial no esta definido para numeros negativos." << std::endl;
        return 1;
    }
    
    std::cout << "\nIniciando calculo del factorial de " << numero << ":\n" << std::endl;
    
    long long resultado = factorial(numero);
    
    // Resultado final con formato
    std::cout << "\n------------------------------------" << std::endl;
    std::cout << "  RESULTADO FINAL" << std::endl;
    std::cout << "  Factorial de " << numero << " = " << resultado << std::endl;
    std::cout << "------------------------------------" << std::endl;
    
    return 0;
}