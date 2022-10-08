#include <iostream> //Librería estándar de entrada y salida de datos

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

int main()
{
    // Variables a utilizar
    int opc;
    char repeat = true;
    do
    {
        system("cls");
        // Hago un menú de opciones
        cout << "Promoci\242n de fin de a\244o para motocicletas." << endl;
        cout << "Men\243 de opciones:" << endl;
        cout << "1. Honda" << endl;
        cout << "2. Yamaha" << endl;
        cout << "3. Suzuki" << endl;
        cout << "4. Otra marca" << endl;
        cout << "5. Salir" << endl
             << endl;

        cout << "Ingrese una opci\242n: ";
        cin >> opc;

        /*Según la opción del usuario, se le mostrará un mensaje con el descuento correspondiente a la motocicleta.*/
        switch (opc)
        {

        case 1:
            cout << "\nHas elegido una motocicleta Honda el cual tiene un descuento de 5\45.";
            system("pause>nul");
            break;

        case 2:
            cout << "\nHas elegido una motocicleta Yamaha el cual tiene un descuento de 8\45.";
            system("pause>nul");
            break;

        case 3:
            cout << "\nHas elegido una motocicleta Suzuki el cual tiene un descuento de 10\45.";
            system("pause>nul");
            break;

        case 4:
            cout << "\nHas elegido una motocicleta de cualquier marca el cual tiene un descuento de 2\45.";
            system("pause>nul");
            break;

        case 5:
            repeat = false;
            break;
        default:
            repeat = false;
            break;
        }
    } while (repeat);

    return 0;
}
