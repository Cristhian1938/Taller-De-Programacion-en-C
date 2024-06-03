#include <stdio.h>

int main() {
    int n, suma = 0;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Sumar los números pares hasta n
    for (int i = 2; i <= n; i += 2) {
        suma += i; // Sumar el número par a la suma total
    }
    
    // Mostrar la suma de los números pares hasta n
    printf("La suma de los numeros pares hasta %d es %d\n", n, suma);
    
    return 0;
}
