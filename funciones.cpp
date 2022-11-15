#include <iostream> //Librería estándar de entrada y salida de datos
#include <conio.h>  //Librería para poder pausar
#include <stdlib.h>  //Librería para poder limpiar pantalla

// Declaro nombre-espacio para las entradas y salidas de datos:
using namespace std;

// Declaro variable como global para todas las funciones:
float students[20];
// Creo una template para no distinguir entre tipos de datos de entrada para la función request():
template <class type>

// Creo la función principal request(), con salida de dato estático:
float *request(type students[]){
    for(int i = 0; i < 20; i++){
        cout<<"Ingrese la nota del estudiante "<<i+1<<": ";
        cin>>students[i];
    }

    return students;
}

// Creo función para el promedio:
void average(){
    float *array = request(students), sum = 0;

    for(int i = 0; i < 20; i++){
        sum += array[i];
    }

    cout<<endl<<"Promedio de todas las notas es: "<<(sum/20);
    getch();
}

// Creo función para los Aprobados:
void approved(){
    float *array = request(students);
    int sum = 0;
    
    for(int i = 0; i < 20; i++){
        if(array[i] >= 11.5){
            sum += 1;
        }
    }

    cout<<endl<<"En total hay "<<sum<<" estudiantes Aprobados.";
    getch();
}

// Creo función para los Reprobados:
void failed(){
    float *array = request(students);
    int sum = 0;
    
    for(int i = 0; i < 20; i++){
        if(array[i] < 11.5){
            sum += 1;
        }
    }

    cout<<endl<<"En total hay "<<sum<<" estudiantes Reprobados.";
    getch();
}

// Creo función para la Nota más Baja:
void noteLow(){
    float *array = request(students), less;

    for(int i = 0; i < 20; i++){
        if(i == 0) less = array[0];
        if(less > array[i]) less = array[i];
    }

    cout<<endl<<"Nota mas Baja es: "<<less;
    getch();
}

// Creo función para la Nota más Alta:
void noteHigh(){
    float *array = request(students), higher = 0;

    for(int i = 0; i < 20; i++){
        if(higher < array[i]) higher = array[i];
    }

    cout<<endl<<"Nota mas Alta es: "<<higher;
    getch();
}

// Creo función pricipal:
int main(){
    // Variables a utilizar:
    int option;
    bool repeat=true;

    // Creo ciclo do-while para la interacción del usuario:
    do{
        // Limpio pantalla para mostrar de nuevo el menú de opciones:
        system("cls");

        // Hago un menú de opciones:
        cout<<endl<<"Menu de opciones (las notas seran en base del 1-20 puntos):"<<endl;
        cout<<"1. Promedio de 20 notas de los estudiantes."<<endl;
        cout<<"2. Cantidad de estudiantes Aprobados."<<endl;
        cout<<"3. Cantidad de estudiantes Reprobados."<<endl;
        cout<<"4. Nota mas Baja."<<endl;
        cout<<"5. Nota mas Alta."<<endl;
        cout<<"6. Salir"<<endl<<endl;

        // Registro la opción del usuario:
        cout<<"Ingrese una opcion: ";
        cin>>option;

        //Según la opción del usuario, se ejecutará lo deseado.
        switch(option){
            case 1 : average(); break;
            case 2 : approved(); break;
            case 3 : failed(); break;
            case 4 : noteLow(); break;
            case 5 : noteHigh(); break;
            case 6: repeat=false; break;
        }

    }while(repeat);

    return 0;
}