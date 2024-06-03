#include <stdio.h>

int main() {
    int n; 
    int producto = 1; // Inicializamos el producto como 1 para que no afecte a la multiplicación
    int i = 1; // Inicializamos el contador de términos en 1

    // Solicitamos al usuario el número de términos
    printf("Ingresa el número de términos: ");
    scanf("%d", &n);

    // Calculamos el producto de la serie utilizando un bucle while
    while (i <= n) { 
        producto *= 2; // Multiplicamos el producto por 2 en cada iteración
        i++; // Incrementamos el contador de términos
    }

    // Imprimimos el resultado
    printf("El producto de la serie es: %d\n", producto); 
    return 0;
}
