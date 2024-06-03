#include <stdio.h>

int main() {
    int num, rawhile; // Declaración de variables para el número y su raíz cúbica

    // Solicitar al usuario que ingrese un número para calcular su raíz cúbica exacta
    printf("Ingrese un numero para calcular su raiz cubica exacta con Bucle While:\n");
    scanf("%d", &num); // Leer la entrada del usuario y almacenarla en la variable 'num'

    rawhile = 0; // Inicializacion de la suposición de la raíz cúbica a 0
    // Bucle para incrementar 'rawhile' hasta que su cubo sea justo menor o igual a 'num'
    while (rawhile * rawhile * rawhile < num) { // Condicion
        rawhile++; // Incrementar 'rawhile' para encontrar la raíz cúbica // Actualizacion
    }
    
    // Verificar si el cubo de 'rawhile' es igual a 'num'
    if (rawhile * rawhile * rawhile == num) { 
        // Si es verdadero, 'rawhile' es la raíz cúbica exacta de 'num'
        printf("La raiz cubica exacta es: %d\n", rawhile);
    } else {
        // Si no, 'num' no tiene una raíz cúbica exacta
        printf("El numero %d no tiene una raiz cubica exacta.\n", num);
    }

    return 0; 
}