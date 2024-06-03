#include <stdio.h>

int main() {
    int n, suma = 0, factorial = 1, i = 1;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Mostrar el encabezado de la serie factorial
    printf("• Ejemplo: Si n = %d, suma = ", n);

    // Calcular la suma de los factoriales de los primeros n números y mostrar la serie
    while (i <= n) {
        factorial *= i; // Calcula i!
        suma += factorial; // Suma i! a la suma total
        if (i > 1) {
            printf(" + "); // Agrega el signo más entre los términos de la serie
        }
        printf("%d!", i); // Muestra el factorial actual
        i++; // Incrementa el contador
    }

    // Mostrar el resultado de la suma de los factoriales
    printf(" = %d\n", suma);
    return 0;
}
