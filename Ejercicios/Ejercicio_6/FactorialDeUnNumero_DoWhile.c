#include <stdio.h>

int main() {
    int num, factorial = 1; // Declaración de variables. 'num' para el número de entrada y 'factorial' para calcular el factorial, inicializado en 1.

    // Solicitar al usuario que ingrese un número para calcular su factorial
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    int i = 1; // Inicializar el contador 'i' para el bucle do-while
    // Verificar si el número ingresado es mayor o igual a 1 para proceder con el cálculo
    if (num >= 1) {
        do {
            factorial *= i; // Multiplicar el factorial por 'i' en cada iteración para obtener el producto acumulado
            i++; // Incrementar 'i' en 1 en cada iteración
        } while (i <= num); // Continuar el bucle mientras 'i' sea menor o igual que 'num'
    }

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial);

    return 0;
}