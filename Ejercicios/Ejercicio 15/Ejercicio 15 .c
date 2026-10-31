#include <stdio.h>

float calcular_promedio(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3.0f;
}

int contar_encima_promedio(float m1, float m2, float m3, float promedio) {
    int cont = 0;
    if (m1 > promedio)
        cont++;
    if (m2 > promedio)
        cont++;
    if (m3 > promedio)
        cont++;
    return cont;
}

int main() {
    float m1, m2, m3;
    printf("Ingrese la primera medicion: ");
    scanf("%f", &m1);
    
    printf("Ingrese la segunda medicion: ");
    scanf("%f", &m2);
    
    printf("Ingrese la tercera medicion: ");
    scanf("%f", &m3);
    
    float prom = calcular_promedio(m1, m2, m3);
    int encima = contar_encima_promedio(m1, m2, m3, prom);
    
    printf("\nPromedio de las mediciones: %.2f\n", prom);
    printf("Mediciones por encima del promedio: %d\n", encima);
    return 0;
}