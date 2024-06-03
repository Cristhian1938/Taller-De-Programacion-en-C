#include <stdio.h>

int main() {
    int n, numeroTriangular = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int i = 1; // Inicializar el contador
    
    // Mostrar la serie de números triangulares
    printf("La serie de numeros triangulares hasta %d es: ", n);
    do {
        numeroTriangular += i; // Sumar el número actual al número triangular
        printf("%d", i); // Mostrar el número actual
        if (i < n) {
            printf(" + "); // Agregar el signo más entre los números
        }
        i++; // Incrementar el contador
    } while (i <= n);
    printf(" = %d\n", numeroTriangular); // Mostrar el resultado total

    return 0;
}
