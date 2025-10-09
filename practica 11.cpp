#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Problema 1.7: Construya un diagrama de flujo tal que dado como datos
    // los tres lados de un triángulo, pueda determinar su área.
    // L1, L2, L3 representan los tres lados del triángulo.

    float L1, L2, L3, S, AREA;
    const float PI = 3.141592;

    // Entrada de datos
    cout << "Escribe la medida del lado uno del triángulo: " << "\n";
    cin >> L1;

    cout << "Escribe la medida del lado dos del triángulo: " << "\n";
    cin >> L2;

    cout << "Escribe la medida del lado tres del triángulo: " << "\n";
    cin >> L3;

    // Cálculo
    S = (L1 + L2 + L3) / 2;
    AREA = sqrt(S * (S - L1) * (S - L2) * (S - L3));

    // Se imprimen resultados
    cout << "El área del triángulo es: " << AREA << "\n";

    return 0;
}
