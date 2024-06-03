#include <stdio.h>

int main() {
    int numero, i;
    int esPrimo = 1; // 1 representa verdadero, 0 falso
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Comprobar si el número es menor o igual a 1
    if (numero <= 1) {
        esPrimo = 0; // 0 y 1 no son primos
    } else {
        // Iterar desde 2 hasta la mitad del número para verificar si es divisible
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = 0; // Si es divisible, no es primo
                break; // Salir del bucle
            }
        }
    }
    
    // Verificar si esPrimo es verdadero o falso y mostrar el resultado
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
    
    return 0;
}
