#include <iostream> //Librería estándar de entrada y salida de datos
//#include <windows.h>//Librería para utilizar la función gotoxy();
#include <iomanip>  //Librería para la función setw();

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

/*// Construyo la función gotoxy();
void gotoxy(int x, int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}*/

int main(){
    // Variables a utilizar
    int matriz_a[3][3], matriz_b[3][3], matriz_sum[3][3], matriz_subtraction[3][3];

    // Pido los datos de para la matriz A:
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout<<"Ingrese los elementos para la matriz A ["<<i<<"]["<<x<<"]: ";
            cin>>matriz_a[i][x];
        }
    }
    cout<<endl;

    // Pido los datos de para la matriz B:
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout<<"Ingrese los elementos para la matriz B ["<<i<<"]["<<x<<"]: ";
            cin>>matriz_b[i][x];
        }
    }

    // Hago las operaciones del ejercicio suma y resta de matrices:
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            matriz_sum[i][x] = matriz_a[i][x] + matriz_b[i][x];
            matriz_subtraction[i][x] = matriz_a[i][x] - matriz_b[i][x];
        }
    }

    // Muestro en pantalla la matriz A original:
    cout<<endl<<"Matriz A:";
    for(int i = 0; i < 3; i++){
        cout<<endl<<"|"<<ends;
        for(int x = 0; x < 3; x++){
            cout<<setw(4)<<matriz_a[i][x]<<ends<<ends;
        }
        cout<<ends<<"|";
    }

    // Muestro en pantalla la matriz B original:
    cout<<endl<<endl<<"Matriz B:";
    for(int i = 0; i < 3; i++){
        cout<<endl<<"|"<<ends;
        for(int x = 0; x < 3; x++){
            cout<<setw(4)<<matriz_b[i][x]<<ends<<ends;
        }
        cout<<ends<<"|";
    }

    // Muestro en pantalla la matriz A+B:
    cout<<endl<<endl<<"Suma de Matriz A+B:";
    for(int i = 0; i < 3; i++){
        cout<<endl<<"|"<<ends;
        for(int x = 0; x < 3; x++){
            cout<<setw(4)<<matriz_sum[i][x]<<ends<<ends;
        }
        cout<<ends<<"|";
    }

    // Muestro en pantalla la matriz A-B:
    cout<<endl<<endl<<"Resta de Matriz A-B:";
    for(int i = 0; i < 3; i++){
        cout<<endl<<"|"<<ends;
        for(int x = 0; x < 3; x++){
            cout<<setw(4)<<matriz_subtraction[i][x]<<ends<<ends;
        }
        cout<<ends<<"|";
    }

    cout<<endl<<endl;
    
    system("pause");
    return 0;
}