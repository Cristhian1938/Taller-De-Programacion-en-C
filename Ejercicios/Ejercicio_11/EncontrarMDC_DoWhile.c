#include <stdio.h>

int main() {
    int a, b, temporal;
    
    // Solicitar al usuario que ingrese dos números
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    
    // Algoritmo de Euclides para encontrar el MCD
    do {
        temporal = b; // Almacenar el valor de b en una variable temporal
        b = a % b; // Actualizar b con el residuo de la división entre a y b
        a = temporal; // Actualizar a con el valor almacenado en la variable temporal
    } while (b != 0); // Continuar el bucle mientras b no sea igual a 0
    
    // Mostrar el resultado del MCD
    printf("El MCD de los numeros ingresados es %d\n", a);
    
    return 0;
}
