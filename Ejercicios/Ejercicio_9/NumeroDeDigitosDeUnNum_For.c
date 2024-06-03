#include <stdio.h>

int main() {
    int numero, contador = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Bucle for para contar los dígitos del número
    for (int n = numero; n != 0; n /= 10) {
        contador++; // Incrementa el contador en cada iteración
    }
    
    // Muestra el número de dígitos del número ingresado
    printf("El numero %d tiene %d digitos\n", numero, contador);
    
    return 0;
}
