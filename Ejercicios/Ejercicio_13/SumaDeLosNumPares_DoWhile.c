#include <stdio.h>

int main() {
    int n, suma = 0, i = 2;
    
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Asegurarse de que el bucle se ejecute solo si n es al menos 2
    if (n >= 2) {
        // Bucle do-while para sumar los números pares hasta n
        do {
            suma += i; // Sumar el número par a la suma total
            i += 2; // Incrementar i en 2 para seleccionar el siguiente número par
        } while (i <= n); // Continuar el bucle mientras i sea menor o igual a n
    }
    
    // Mostrar la suma de los números pares hasta n
    printf("La suma de los numeros pares hasta %d es %d\n", n, suma);
    
    return 0;
}
