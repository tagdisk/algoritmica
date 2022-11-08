#include <iostream> //Librería estándar de entrada y salida de datos

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

int main(){
    // Variables a utilizar
    int array_a[10], array_b[10], sum[10], multiply[10], less, higher = 0;
    float average[10];

    //Búcle for para pedir al usuario los elementos del arreglo A y B:
    for(int i = 0; i < 10; i++){
        cout<<"Ingrese el elemento "<<i+1<<" para el arreglo A: "<<endl;
        cin>>array_a[i];

        cout<<"Ingrese el elemento "<<i+1<<" para el arreglo B: "<<endl;
        cin>>array_b[i]; 

        //Operaciones y calculos de elementos para el arreglo final:
        sum[i] = array_a[i] + array_b[i];
        multiply[i] = array_a[i] * array_b[i];
        average[i] = (array_a[i] + array_b[i]) / 2;

        //Operación para determinar menor y mayor del arreglo A y B:
        if(i == 0) less = array_a[0];
        if(less > array_a[i]) less = array_a[i];
        if(higher < array_b[i]) higher = array_b[i];
    }
    
    //Búcle for con los elementos ya guardados para la suma de elementos entre el arreglo A y B:
    cout<<endl<<"La suma de los elementos entre el arreglo A y B es: "<<endl;
    for(int i = 0; i < 10; i++){
       cout<<sum[i]<<endl;
    }

    //Búcle for con los elementos ya guardados para la multiplicación de elementos entre el arreglo A y B:
    cout<<endl<<"La multiplicacion de los elementos entre el arreglo A y B es: "<<endl;
    for(int i = 0; i < 10; i++){
       cout<<multiply[i]<<endl;
    }

    //Búcle for con los elementos ya guardados para el promedio de elementos entre el arreglo A y B:
    cout<<endl<<"El promedio de los elementos entre el arreglo A y B es: "<<endl;
    for(int i = 0; i < 10; i++){
       cout<<average[i]<<endl;
    }

    //Mostrar el menor de los elementos del arreglo A:
    cout<<endl<<"Numero menor del arreglo A es: "<<less<<endl;
   
    //Mostrar el mayor de los elementos del arreglo B:
    cout<<endl<<"Numero mayor del arreglo B es: "<<higher<<endl<<endl;
    
    system("pause");
    return 0;
}