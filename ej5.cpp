#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;

public:
    void setNombre(string n) {
        nombre = n;
    }

    void setEdad(int e) {
        edad = e;
    }

    void setCalificacion(float c) {
        calificacion = c;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    float getCalificacion() {
        return calificacion;
    }
};

int main() {
    Estudiante alumno;

    string nombre;
    int edad;
    float nota;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese la calificacion: ";
    cin >> nota;

    alumno.setNombre(nombre);
    alumno.setEdad(edad);
    alumno.setCalificacion(nota);

    cout << "\nDatos del estudiante:\n";
    cout << "Nombre: " << alumno.getNombre() << endl;
    cout << "Edad: " << alumno.getEdad() << endl;
    cout << "Calificacion: " << alumno.getCalificacion() << endl;

    return 0;
}
