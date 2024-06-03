#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Verificar si n es mayor o igual a 1 para ejecutar el bucle
    if (n >= 1) {
        // Bucle do-while para sumar solo los números impares hasta n
        do {
            if (i % 2 != 0) { // Verificar si el número es impar
                suma += i; // Sumar el número impar a la suma total
            }
            i++; // Incrementar el contador para avanzar al siguiente número
        } while (i <= n); // Continuar el bucle mientras el contador sea menor o igual a n
    }
    
    // Mostrar la suma de los números impares hasta n
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
    
    return 0;
}
