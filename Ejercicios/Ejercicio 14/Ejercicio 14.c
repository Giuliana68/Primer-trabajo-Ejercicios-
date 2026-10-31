#include <stdio.h>

int main() {
    int n;
    long long operaciones_0_n = 0;
    long long operaciones_0_n2 = 0;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    // Procedimiento 1: Recorrido simple -> O(n)
    for (int i = 0; i < n; i++) {
        operaciones_0_n++;
    }
    
    // Procedimiento 2: Recorrido anidado -> O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            operaciones_0_n2++;
        }
    }
    
    printf("\n--- RESULTADOS DE COMPLEJIDAD ---\n");
    printf("Para n = %d\n", n);
    printf("Operaciones en 1 ciclo (O(n)): %lld\n", operaciones_0_n);
    printf("Operaciones en 2 ciclos anidados (O(n^2)): %lld\n", operaciones_0_n2);
    
    return 0;
}