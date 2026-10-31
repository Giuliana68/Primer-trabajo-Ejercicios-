#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> mediciones(10);
    double suma = 0.0;
    cout << "Ingrese 10 mediciones: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Medicion " << i + 1 << ": ";
        cin >> mediciones[i];
        suma += mediciones[i];
    }
    
    double media = suma / 10.0;
    int contador_superiores = 0;
    for (int i = 0; i < 10; i++) {
        if (mediciones[i] > media) {
            contador_superiores++;
        }
    }
    
    cout << "\nMedia aritmetica: " << media << endl;
    cout << "Observaciones por encima de la media: " << contador_superiores << endl;
    return 0;
}