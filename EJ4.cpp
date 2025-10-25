#include <iostream>
using namespace std;

class Sumatoria {
private:
    int suma;

public:
    Sumatoria() {
        suma = 0;
        int numero;
        cout << "Ingrese valores enteros (0 para finalizar): " << endl;

        do {
            cin >> numero;
            suma += numero;
        } while (numero != 0);
    }

    ~Sumatoria() {
        cout << "La suma total de los valores ingresados es: " << suma << endl;
    }
};

int main() {
    Sumatoria s;
    return 0;
}
