#include <stdio.h>

int main() {
    int numero, contador = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    int n = numero; // Almacena el número ingresado en una variable temporal
    // Bucle do-while para contar los dígitos del número
    do {
        contador++; // Incrementa el contador en cada iteración
        n /= 10; // Divide el número por 10 para eliminar el último dígito
    } while (n != 0); // Continúa el bucle mientras n sea diferente de 0
    
    // Muestra el número de dígitos del número ingresado
    printf("El numero %d tiene %d digitos\n", numero, contador);
    
    return 0;
}
