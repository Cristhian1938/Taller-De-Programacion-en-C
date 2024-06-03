#include <stdio.h> // Biblioteca estandar de entrada/salida

int main() { // Función principal
    int numwhile; // Almacena número
    int sumawhile = 0; // Suma inicial en cero // Inicializacion
    
    // Pide número al usuario
    printf("Suma de los digitos de un numero con while\n");
    printf("Ingresa el numero: ");
    scanf("%d", &numwhile);
    
    // Bucle para sumar dígitos
    while (numwhile > 0) { //Condicion
        sumawhile += numwhile % 10; // Añade dígito a suma
        numwhile /= 10; // Elimina último dígito // Actualizacion
    }
    
    // Muestra suma de dígitos
    printf("La suma de los dígitos es: %d\n", sumawhile);
    
    return 0; 
}