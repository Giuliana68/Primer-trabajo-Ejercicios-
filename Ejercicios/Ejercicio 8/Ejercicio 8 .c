#include <stdio.h>
#include <stdbool.h>

int main() {
    int edad, validado_int;
    printf("Ingrese la edad del individuo: ");
    scanf("%d", &edad);
    printf("¿El registro ha sido validado? (1=si, 0=No): ");
    scanf("%d", &validado_int);
    
    bool validado = (validado_int == 1);
    
    if (edad >= 18 && validado) {
        printf("La observacion PUEDE incorporarse al conjunto de datos.\n");
    } else {
        printf("La observacion NO PUEDE incorporarse.\n");
    }
    return 0;
}