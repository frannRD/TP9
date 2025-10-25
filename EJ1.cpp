#include <iostream>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;

public:
    Alumno() {
        cout << "Ingrese el nombre del alumno: ";
        getline(cin, nombre);
        cout << "Ingrese la edad: ";
        cin >> edad;
      
    }

    void mostrarDatos() {
        cout << "\nNombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    void verificarMayorEdad() {
        if (edad >= 18)
            cout << "Es mayor de edad." << endl;
        else
            cout << "Es menor de edad." << endl;
    }
};

int main() {
    Alumno alumno1;
    alumno1.mostrarDatos();
    alumno1.verificarMayorEdad();
    return 0;
}
