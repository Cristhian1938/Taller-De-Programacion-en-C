#include <stdio.h>

int main() {
    int n, sum = 0; // Declaración de variables. 'n' para el número de términos, 'sum' para la suma total, inicializada en 0.

    // Solicitar al usuario que ingrese el número de términos 'n' para calcular la suma de la serie aritmética
    printf("Ingrese el numero de terminos n para calcular la suma de la serie aritmetica: ");
    scanf("%d", &n); // Leer la entrada del usuario y almacenarla en la variable 'n'

    // Bucle 'for' que se ejecuta desde 1 hasta 'n'
    for (int i = 1; i <= n; i++) {
        sum += i; // Sumar el contador 'i' a la suma total en cada iteración
    }

    // Imprimir el resultado de la suma de los primeros 'n' términos de una serie aritmética
    printf("La suma de los primeros %d terminos de una serie aritmetica es: %d\n", n, sum);

    return 0; 
}