#include <stdio.h> // Biblioteca estandar de entrada/salida

int main() { // Inicio del programa
    int numero; // Variable para el número
    int suma = 0; // Inicializa suma //Inicializacion
    
    // Solicita un número al usuario
    printf("Suma de los digitos de un numero con For\n");
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    
    // Bucle para sumar dígitos
    for( ; numero > 0; numero /= 10) { // Condicion ; Actualizacion
        suma += numero % 10; // Suma dígito
    }
    
    // Imprime resultado
    printf("La suma de los digitos es: %d\n", suma);
    
    return 0; 
}