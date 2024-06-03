#include <stdio.h>

int main() {
    int num, factorial = 1; // Declaración e inicialización de variables

    // Solicitar al usuario que ingrese un número para calcular su factorial
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    // Bucle 'for' que se ejecuta desde 1 hasta el número ingresado
    for (int i = 1; i <= num; i++) {
        factorial *= i; // Multiplicar el factorial por 'i' en cada iteración
    }

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial);

    return 0; 
}