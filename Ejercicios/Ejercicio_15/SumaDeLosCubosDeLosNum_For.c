#include <stdio.h>

int main() {
    int n, suma = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Mostrar la serie de números cúbicos y calcular la suma
    printf("La serie de numeros cúbicos hasta %d es: ", n);
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + "); // Agregar el signo más entre los términos de la serie
        }
        printf("%d^3", i); // Mostrar el término actual de la serie
        suma += i * i * i; // Agregar el cubo del número actual a la suma total
    }

    // Mostrar la suma de los cubos de los primeros n números
    printf("\nLa suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    
    return 0;
}
