#include <iostream> //Librería estándar de entrada y salida de datos

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

int main()
{
    // Variables a utilizar
    float n[20], c, temp;

    cout << "Ingrese la cantidad de n\243meros a ordenar: ";
    cin >> c;

    // Pido los números según la cantidad anterior a ordenar
    for (int i = 1; i <= c; i++)
    {
        cout << "Ingrese el n\243mero: ";
        cin >> n[i];
    }

    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c - 1; j++)
        {
            if (n[j] > n[j + 1])
            { // Manera de ordenar en forma ASC
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    cout << "\nLos n\243meros ordenados en forma ascendentes son: " << endl;
    // Búcle para mostrar al usuario los números ordenados
    for (int j = 1; j <= c; j++)
    {
        cout << n[j] << endl;
    }

    system("pause");
    return 0;
}