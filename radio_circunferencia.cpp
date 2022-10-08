#include <iostream> //Librería estándar de entrada y salida de datos
#include <iomanip>  //Librería para el uso de precisión
#include <math.h>   //Librería para el uso variables matemáticas

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

int main()
{
    // Variables a utilizar
    float r = 0, cp = 0, ca = 0;

    // Pido el Radio
    cout << "Ingrese el Radio de la Circunferencia: ";
    cin >> r;

    // Hago la operación para el perímetro:
    cp = 2 * M_PI * r;
    // Hago la operación para el área:
    ca = M_PI * pow(r, 2);

    // Muestro al usuario los datos correspondientes a los calculo:
    cout << fixed << setprecision(2) << "\nPer\241metro: " << cp << "cm" << endl;
    cout << fixed << setprecision(2) << "\265rea: " << ca << "cm\375" << endl
         << endl;

    system("pause");
    return 0;
}
