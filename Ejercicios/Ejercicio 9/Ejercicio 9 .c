#include <stdio.h>

int main() {
    float temp;
    printf("Ingrese la temperatura (C): ");
    scanf("%f", &temp);
    if (temp < 0) {
        printf("Clasificacion: Congelacion\n");
    } else if (temp <= 20) {
        printf("Clasificacion: Frio\n");
    } else {
        printf("Clasificacion: Templado\n");
    }
    return 0;
}