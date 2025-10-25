#include <iostream>
using namespace std;

class Operaciones {
private:
    int num1, num2;

public:
    Operaciones(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void mostrarResultados() {
        cout << "Suma: " << num1 + num2 << endl;
        cout << "Resta: " << num1 - num2 << endl;
        cout << "Multiplicacion: " << num1 * num2 << endl;
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "No se puede dividir por cero." << endl;
    }
};

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    Operaciones op(a, b);
    op.mostrarResultados();
    return 0;
}
