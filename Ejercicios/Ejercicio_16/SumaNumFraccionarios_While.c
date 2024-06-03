#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
    int i = 1;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Mostrar el encabezado de la serie
    printf("• Ejemplo: Si n = %d, suma = ", n);

    // Calcular la suma de la serie hasta el término n y mostrar la serie
    while (i <= n) {
        suma += 1.0 / i; // Agregar el término actual a la suma total
        if (i > 1) {
            printf(" + "); // Agregar el signo más entre los términos de la serie
        }
        printf("1/%d", i); // Mostrar el término actual de la serie
        i++; // Incrementar el contador
    }

    // Mostrar la suma de la serie con precisión de 6 decimales
    printf(" = %.6f\n", suma);

    return 0;
}
