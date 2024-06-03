#include <stdio.h>

int main() {
    // Declaración de variables
    int numfor, rafor, resfor;

    // Solicitar al usuario un número para calcular su raíz cúbica
    printf("Ingrese un numero para calcular su raiz cubica con Bucle For:\n ");
    scanf("%d", &numfor);

    // Inicializar variables para el cálculo de la raíz cúbica
    for(rafor = 0, resfor = 1; numfor >= resfor; rafor++) { // Inicialiacion ; Condicion ; Actualizacion
        // Restar el valor actual de resfor del número ingresado
        numfor -= resfor;
        // Calcular el siguiente valor de resfor basado en la fórmula de la suma de cubos
        resfor += 3 * rafor * rafor + 3 * rafor + 1;
    }
    
    // Imprimir la raíz cúbica aproximada del número ingresado
    printf("La raiz cubica aproximada es: %d\n", rafor);

    return 0;
}