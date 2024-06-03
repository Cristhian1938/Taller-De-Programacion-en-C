#include <stdio.h>

int main() {
    int n, suma = 0, i = 2;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Sumar los números pares hasta n utilizando un bucle while
    while (i <= n) {
        suma += i; // Sumar el número par a la suma total
        i += 2; // Incrementar i en 2 para seleccionar el siguiente número par
    }
    
    // Mostrar la suma de los números pares hasta n
    printf("La suma de los numeros pares hasta %d es %d\n", n, suma);
    
    return 0;
}
