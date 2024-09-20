#include <iostream>

using namespace std;

void calcularPromedio() {
    double notaA, notaB, notaC,notaD ;
    double promedio, porcentaje;


    cout << "Ingrese la primera nota: " << endl;
    cin >> notaA;
    cout << "Ingrese el porcentaje de la materia: (%)" << endl;
    cin >> porcentaje;

    cout << "Ingrese la segunda nota: " << endl;
    cin >> notaB;
    cout << "Ingrese el porcentaje de la materia :(%) " << endl;
    cin >> porcentaje;

    cout << " Ingrese la tercer nota: " << endl;
    cin >> notaC;
    cout << " ingrese el porcentaje de la materia:(%)" << endl;

    cout << " Ingrese la cuarta nota: " << endl;
    cin >> notaD;
    cout << " ingrese el porcentaje de la materia: (%)" << endl;


    promedio = (notaA * porcentaje) + (notaB* porcentaje) + (notaC * porcentaje )+(notaD * porcentaje) / 4 ;
    cout << "El promedio del alumno es: " << promedio << endl;
}

int main() {
    calcularPromedio();
    return 0;
}
