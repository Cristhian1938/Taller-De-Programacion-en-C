#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("La serie geométrica para los primeros %d términos es:\n", n);
    
    // Calcular el producto de la serie y mostrar cada término
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i; // Multiplicar el término actual al producto total
        if (i < n) {
            printf("1/%d + ", i); // Mostrar cada término de la serie
        } else {
            printf("1/%d", i); // Mostrar el último término de la serie sin el símbolo de suma
        }
    }

    // Mostrar el producto de la serie con precisión de 6 decimales
    printf("\nEl producto de la serie es: %.6f\n", producto);
    
    return 0;
}
