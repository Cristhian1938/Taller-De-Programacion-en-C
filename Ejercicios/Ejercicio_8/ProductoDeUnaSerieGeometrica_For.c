#include <stdio.h>

int main() {
    int n; 
    int producto = 1; 

    // Solicitar al usuario el número de términos
    printf("Ingresa el número de términos: ");
    scanf("%d", &n);

    // Calcular el producto de la serie
    for (int i = 1; i <= n; i++) { 
        producto *= 2; // Multiplicar por 2 en cada término
    }

    // Imprimir el resultado
    printf("El producto de la serie es: %d\n", producto); 
    return 0;
}
