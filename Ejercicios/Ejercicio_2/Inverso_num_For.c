#include <stdio.h> // Inclusión de la biblioteca estándar de entrada/salida

int main() { // Función principal del programa
    int numfor, inverfor = 0; // Declaración de variables

    // Solicita al usuario ingresar un número
    printf("Inverso de un numero con bucle For\n");
    printf("Introduce un numero: ");
    scanf("%d", &numfor); // Lee el número ingresado por el usuario

    // Bucle for para invertir el número
    for (; numfor > 0; numfor /= 10) {
        inverfor = inverfor * 10 + numfor % 10; // Invierte los dígitos del número
    }

    // Imprime el número invertido
    printf("El inverso del numero es: %d\n", inverfor);

    return 0; 
}