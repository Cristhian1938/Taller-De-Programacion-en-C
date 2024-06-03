#include <stdio.h>

int main() {
    int num, rawhile; // Declaración de variables para el número y su raíz cúbica aproximada

    // Solicitar al usuario que ingrese un número para encontrar su raíz cúbica exacta
    printf("Ingrese un numero para calcular su raiz cubica exacta con Bucle do-while:\n");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    rawhile = 0; // Inicializar la variable 'rawhile' que almacenará la raíz cúbica aproximada
    do {
        rawhile++; // Incrementar 'rawhile' en cada iteración para acercarse a la raíz cúbica
    } while (rawhile * rawhile * rawhile < num); // Continuar el bucle hasta que el cubo de 'rawhile' sea al menos 'num'
    
    // Verificar si el cubo de 'rawhile' es exactamente igual a 'num'
    if (rawhile * rawhile * rawhile == num) {
        // Si es así, entonces 'rawhile' es la raíz cúbica exacta de 'num'
        printf("La raiz cubica exacta es: %d\n", rawhile);
    } else {
        // Si no, entonces 'num' no tiene una raíz cúbica exacta
        printf("El numero %d no tiene una raiz cubica exacta.\n", num);
    }

    return 0; 
}