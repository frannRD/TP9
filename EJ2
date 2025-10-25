#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;

public:
    Empleado() {
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre);
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
        cin.ignore();
    }

    void mostrarDatos() {
        cout << "\nNombre: " << nombre << endl;
        cout << "Sueldo: $" << sueldo << endl;
    }

    void verificarImpuesto() {
        if (sueldo > 3000)
            cout << "Debe pagar impuestos." << endl;
        else
            cout << "No paga impuestos." << endl;
    }
};

int main() {
    Empleado empleado1;
    empleado1.mostrarDatos();
    empleado1.verificarImpuesto();
    return 0;
}
