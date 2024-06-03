#include <stdio.h>

int main() {
    int n, suma = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Sumar solo los números impares hasta n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Verificar si el número es impar
            suma += i; // Sumar el número impar a la suma total
        }
    }
    
    // Mostrar la suma de los números impares hasta n
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
    
    return 0;
}
