#include <iostream>
using namespace std;

int main()
{
    // Problema 1.6: Construya un diagrama de flujo que calcule e imprima
    // el número de segundos que hay en un determinado número de días.

    int DIAS;
    float SEGUNDOS;

    // Entrada de datos
    cout << "Escribe el número de días para calcular los segundos: " << "\n";
    cin >> DIAS;

    // Cálculo
    SEGUNDOS = DIAS * 24 * 60 * 60;

    // Se imprimen los resultados
    cout << "En " << DIAS << " días, hay " << SEGUNDOS << " segundos." << "\n";

    return 0;
}
