#include <stdio.h>

int main() {
    int numero, i = 2;
    int esPrimo = 1; // 1 representa verdadero, 0 falso
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Comprobar si el número es menor o igual a 1
    if (numero <= 1) {
        esPrimo = 0; // 0 y 1 no son primos
    } else {
        // Comprobar si el número es mayor que 2 para ejecutar el bucle
        if (numero > 2) {
            // Bucle do-while para verificar si el número es primo
            do {
                if (numero % i == 0) {
                    esPrimo = 0; // Si es divisible, no es primo
                    break; // Salir del bucle
                }
                i++; // Incrementar el contador para probar el siguiente divisor
            } while (i <= numero / 2); // Continuar el bucle mientras el contador sea menor o igual a la mitad del número
        }
    }
    
    // Mostrar el resultado según el valor de esPrimo
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
    
    return 0;
}
