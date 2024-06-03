#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Calcular la suma de los cuadrados de los primeros n números
    do {
        suma += i * i; // Sumar el cuadrado del número actual a la suma total
        i++; // Incrementar el contador para avanzar al siguiente número
    } while (i <= n); // Continuar el bucle mientras i sea menor o igual a n

    // Mostrar la suma de los cuadrados de los primeros n números
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma);
    
    return 0;
}
