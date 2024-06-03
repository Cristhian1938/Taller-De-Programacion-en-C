#include <stdio.h>

int main() {
    int num, c, a = 0, b = 1; // Declaración e inicialización de variables para la secuencia de Fibonacci

    // Solicitar al usuario que ingrese el número de elementos de la serie de Fibonacci a mostrar
    printf("Ingrese el numero de elementos de la serie de Fibonacci a mostrar: ");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    // Imprimir el inicio de la serie de Fibonacci
    printf("Serie de Fibonacci con bucle do-while:\n");
    int i = 0; // Inicializar el contador 'i' para el bucle do-while
    do {
        printf("%d, ", a); // Imprimir el valor actual de 'a', que es parte de la serie de Fibonacci
        c = a + b; // Calcular el siguiente valor de la serie sumando los dos últimos números
        a = b; // Actualizar el valor de 'a' al siguiente número en la serie
        b = c; // Actualizar el valor de 'b' al nuevo valor calculado
        i++; // Incrementar el contador 'i'
    } while (i < num); // El bucle do-while se ejecuta al menos una vez y continúa mientras 'i' sea menor que 'num'
    printf("\n"); 

    return 0; 
}