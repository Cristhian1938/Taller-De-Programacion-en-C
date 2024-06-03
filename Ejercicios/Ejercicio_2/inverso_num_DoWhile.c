#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

int main() {
    int numdowhile, inverdowhile = 0; // Declarar variables para el número y su inverso // Inverdowhile es la Inicializacion

    // Mostrar mensaje al usuario
    printf("Inverso de un numero con bucle Do While\n");
    printf("Introduce un numero: ");
    // Leer el número del usuario
    scanf("%d", &numdowhile);

    // Bucle do-while para invertir el número
    do {
        // Multiplicar inverdowhile por 10 y sumar el último dígito de numdowhile
        inverdowhile = (inverdowhile * 10) + numdowhile % 10;
        // Eliminar el último dígito de numdowhile
        numdowhile /= 10; // Actualizacion
    } while (numdowhile > 0); // Continuar mientras numdowhile tenga dígitos // Condicion

    // Mostrar el número invertido
    printf("El inverso del numero es: %d\n", inverdowhile);

    return 0; 
}