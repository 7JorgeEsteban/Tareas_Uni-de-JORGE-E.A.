#include <iostream>
using namespace std;

int main()
{
    // Problema 1.6: Construya un diagrama de flujo que calcule e imprima
    // el n�mero de segundos que hay en un determinado n�mero de d�as.

    int DIAS;
    float SEGUNDOS;

    // Entrada de datos
    cout << "Escribe el n�mero de d�as para calcular los segundos: " << "\n";
    cin >> DIAS;

    // C�lculo
    SEGUNDOS = DIAS * 24 * 60 * 60;

    // Se imprimen los resultados
    cout << "En " << DIAS << " d�as, hay " << SEGUNDOS << " segundos." << "\n";

    return 0;
}
