#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
int MAT;
float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;
//Mensaje de bienvenida
cout << "Hola! Este programa 1.8 Promedio calificaciones" << "\n";
//Se pide la MATRICULA DEL ALUMNO
cout << "Por favor ingrese la matricula del alumno: " << "\n";
//Se asigna el primer valor a MAT
cin >> MAT;
//Se pide la primera calificacion
cout << "Por favor ingrese la primera calificación: " << "\n";
//Se asigna el primer valor a CAL1
cin >> CAL1;
//Se pide la segunda calificacion
cout << "Por favor ingrese la segunda calificación: " << "\n";
//Se asigna el primer valor a CAL2
cin >> CAL2;
//Se pide la tercera calificacion
cout << "Por favor ingrese la tercera calificación: " << "\n";
//Se asigna el primer valor a CAL3
cin >> CAL3;
//Se pide la cuarta calificacion
cout << "Por favor ingrese la cuarta calificación: " << "\n";
//Se asigna el primer valor a CAL4
cin >> CAL4;
//Se pide la quinta calificacion
cout << "Por favor ingrese la quinta calificación: " << "\n";
//Se asigna el primer valor a CAL5
cin >> CAL5;
PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
//Se muestra el resultado.
printf ("\n El promedio del alumno con matricula %d es %5.2f \n", MAT, PRO);
cout << "\n El promedio del alumno con matricula " << MAT << " es " <<PRO <<"\n";
return 0;
}
