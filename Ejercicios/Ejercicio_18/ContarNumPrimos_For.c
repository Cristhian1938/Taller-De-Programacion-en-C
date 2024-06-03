#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int numero) {
    if (numero <= 1) return 0; // 0 y 1 no son primos
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0; // Si el número es divisible por otro número que no sea 1 ni él mismo, no es primo
    }
    return 1; // Si no se encontraron divisores, el número es primo
}

int main() {
    int n, contadorPrimos = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Contar la cantidad de números primos hasta el número n y mostrarlos
    printf("Los numeros primos hasta %d son:\n", n);
    for (int i = 1; i <= n; i++) {
        if (esPrimo(i)) {
            contadorPrimos++; // Incrementar el contador de números primos
            printf("%d ", i); // Mostrar el número primo encontrado
        }
    }
    printf("\n"); // Imprimir una nueva línea para mejorar la legibilidad

    // Mostrar la cantidad de números primos encontrados hasta el número n
    printf("Hay %d numeros primos hasta %d.\n", contadorPrimos, n);
    
    return 0;
}
