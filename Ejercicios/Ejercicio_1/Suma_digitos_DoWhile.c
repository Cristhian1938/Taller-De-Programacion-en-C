#include <stdio.h> // Biblioteca estandar de entrada/salida

int main() { // Inicio del programa
    int ndowhile; // Variable para el número
    int sdowhile = 0; // Suma inicializada a cero // Inicializacion
    
    // Muestra instrucciones al usuario.
    printf("Suma de los digitos de un numero con Do while\n");
    printf("Ingresa el numero: ");
    // Obtiene el número del usuario
    scanf("%d", &ndowhile);
    
    // Bucle Do While para sumar dígitos
    do {
        sdowhile += ndowhile % 10; // Añade último dígito
        ndowhile /= 10; // Remueve último dígito //Actualizacion
    } while (ndowhile > 0); // Repite si quedan dígito //Condicion
    
    // Muestra resultado de la suma
    printf("La suma de los digitos es: %d\n", sdowhile);
    
    return 0; 
}