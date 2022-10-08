#include <iostream> //Librería estándar de entrada y salida de datos
#include <math.h>   //Librería para el uso variables matemáticas

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

int main()
{
    // Variables a utilizar
    int opc, cube = 0, par_impar = 0;
    char repeat = true;

    do
    {
        system("cls");
        // Hago un menú de opciones
        cout << "Men\243 de opciones:" << endl;
        cout << "1. Cubo de un n\243mero" << endl;
        cout << "2. N\243mero Par o Impar" << endl;
        cout << "3. Salir" << endl
             << endl;

        cout << "Ingrese una opci\242n: ";
        cin >> opc;

        /*Según la opción del usuario, se ejecutará lo deseado.*/
        switch (opc)
        {

        case 1:
            // Operación para el cubo de un número:
            cout << "\nIngrese un n\243mero: ";
            cin >> cube;
            cout << "El Cubo del n\243mero ingresado es: " << pow(cube, 3);
            system("pause>nul");
            break;

        case 2:
            // Operación para determinar un número PAR o IMPAR:
            cout << "\nIngrese un n\243mero: ";
            cin >> par_impar;

            if (par_impar % 2 == 0)
            {
                cout << "El n\243mero ingresado es PAR.";
            }
            else
            {
                cout << "El n\243mero ingresado es IMPAR.";
            }

            system("pause>nul");
            break;

        case 3:
            repeat = false;
            break;
        default:
            repeat = false;
            break;
        }
    } while (repeat);

    return 0;
}