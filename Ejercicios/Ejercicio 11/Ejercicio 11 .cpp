#include <iostream>

using namespace std;

int main() {
    const int CLAVE_CORRECTA = 1234;
    int clave_ingresada = 0;
    int intentos = 0;
    
    while (clave_ingresada != CLAVE_CORRECTA) {
        cout << "Ingrese la clave numerica de acceso: ";
        cin >> clave_ingresada;
        intentos++;
        
        if (clave_ingresada != CLAVE_CORRECTA) {
            cout << "Clave incorrecta. Intente de nuevo.\n";
        }
    }
    
    cout << "Acceso concedido. Intentos realizados: " << intentos << endl;
    return 0;
}