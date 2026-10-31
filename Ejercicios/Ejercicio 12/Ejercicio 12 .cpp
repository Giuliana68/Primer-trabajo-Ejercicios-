#include <iostream>

using namespace std;

int main() {
    int validos = 0;
    int valor;
    cout << "Ingrese una secuencia de 10 mediciones (Use 999 para terminar):\n";
    for (int i = 0; i < 10; i++) {
        cout << "Medicion " << i + 1 << ": ";
        cin >> valor;
        
        if (valor == 999) {
            cout << "Finalizando procesamiento por codigo 999...\n";
            break;
        }
        
        if (valor < 0) {
            cout << "Valor negativo ignorado.\n";
            continue;
        }
        
        validos++;
    }
    
    cout << "Total de valores validos procesados: " << validos << endl;
    return 0;
}