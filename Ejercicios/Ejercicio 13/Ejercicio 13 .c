#include <stdio.h>

int main() {
    int edades[10];
    int suma = 0;
    printf("Ingrese las edades de 10 participantes: \n");
    for (int i = 0; i < 10; i++) {
        printf("Participante %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }
    
    int min = edades[0];
    int max = edades[0];
    
    for (int i = 1; i < 10; i++) {
        if (edades[i] < min)
            min = edades[i];
        if (edades[i] > max)
            max = edades[i];
    }
    
    float media = (float) suma / 10.0;
    int mas_que_media = 0;
    
    for (int i = 0; i < 10; i++) {
        if (edades[i] > media) {
            mas_que_media++;
        }
    }
    
    printf("\n--- RESULTADOS ESTADISTICOS ---\n");
    printf("Edad minima: %d\n", min);
    printf("Edad maxima: %d\n", max);
    printf("Edad media: %.2f\n", media);
    printf("Participantes por encima de la media: %d\n", mas_que_media);
    
    return 0;
}