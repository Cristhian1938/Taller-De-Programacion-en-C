#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

int main() {
    // Declarar variables para el número y su inverso
    int numwhile, inverwhile = 0; // Inverwhile inicializacion

    // Mostrar mensaje al usuario para que introduzca un número
    printf("Inverso de un numero con bucle While\n");
    printf("Introduce un numero: ");
    // Leer el número del usuario
    scanf("%d", &numwhile);

    // Bucle while para invertir el número
    while (numwhile > 0) { // Condicion
        // Multiplicar inverwhile por 10 y sumar el último dígito de numwhile
        inverwhile = (inverwhile * 10) + numwhile % 10;
        // Eliminar el último dígito de numwhile
        numwhile /= 10; // Actualizacion
    }

    // Mostrar el número invertido
    printf("El inverso del numero es: %d\n", inverwhile);

    return 0; 
}