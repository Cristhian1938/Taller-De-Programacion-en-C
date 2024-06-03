#include <stdio.h>

int main() {
    int num, factorial = 1; // Declaración de variables. 'num' almacenará el número ingresado y 'factorial' mantendrá el cálculo del factorial, inicializado en 1.

    // Solicitar al usuario que ingrese un número para calcular su factorial
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    int i = 1; // Inicializar el contador 'i' para el bucle while
    // Bucle 'while' que se ejecuta mientras 'i' sea menor o igual que 'num'
    while (i <= num) {
        factorial *= i; // Multiplicar el factorial por 'i' en cada iteración para obtener el producto acumulado
        i++; // Incrementar 'i' en 1 en cada iteración
    }

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial);

    return 0; 
}