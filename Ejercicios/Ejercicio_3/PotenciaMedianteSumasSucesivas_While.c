#include <stdio.h> // Incluir la biblioteca estándar de entrada/salida

int main() {
    // Declarar variables para la base, el exponente, el resultado y el contador
    int base, exponent;
    int result = 1; // Inicializar el resultado a 1, que es la identidad multiplicativa
    int i = 0; // Inicializacion de el contador para el bucle while

    // Solicitar al usuario la base y el exponente para la operación de potencia
    printf("Potencia mediante sumas sucesivas con el Bucle While\n");
    printf("Ingrese la base: ");
    scanf("%d", &base); // Leer la base de la entrada estándar
    printf("Ingrese el exponente: ");
    scanf("%d", &exponent); // Leer el exponente de la entrada estándar

    // Bucle while que se repite tantas veces como el valor del exponente
    while(i < exponent) { // Condicion
        result *= base; // Multiplicar el resultado por la base en cada iteración
        i++; // Incrementar el contador // Actualizacion
    }

    // Mostrar el resultado de la base elevada al exponente
    printf("El resultado de %d elevado a la %d es: %d\n", base, exponent, result);

    return 0; 
}