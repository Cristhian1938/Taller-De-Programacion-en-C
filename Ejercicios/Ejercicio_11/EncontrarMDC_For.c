#include <stdio.h>

int main() {
    int a, b, mcd;
    
    // Solicitar al usuario que ingrese dos números
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    
    // Inicializar el máximo común divisor con el menor de los dos números ingresados
    mcd = a < b ? a : b;
    
    // Bucle for para encontrar el máximo común divisor
    for(; mcd > 0; mcd--) {
        // Si ambos números son divisibles por mcd, se ha encontrado el MCD
        if (a % mcd == 0 && b % mcd == 0) {
            break; // Salir del bucle
        }
    }
    
    // Mostrar el resultado del MCD
    printf("El MCD de %d y %d es %d\n", a, b, mcd);
    
    return 0;
}
