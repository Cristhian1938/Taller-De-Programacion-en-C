#include <stdio.h>

int main() {
    int n, numeroTriangular = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Mostrar la serie de números triangulares
    printf("La serie de numeros triangulares hasta %d es: ", n);
    for (int i = 1; i <= n; i++) {
        numeroTriangular += i; // Sumar el número actual al número triangular
        printf("%d", i); // Mostrar el número actual
        if (i < n) {
            printf(" + "); // Agregar el signo más entre los números
        }
    }
    printf(" = %d\n", numeroTriangular); // Mostrar el resultado total

    return 0;
}
