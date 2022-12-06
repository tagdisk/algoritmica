#include <iostream> //Libreria principal
#include <stdlib.h> //Para usar la funcion System (Limpia la pantalla con "cls")
#include <conio.h> //Para pausar el programa con la funcion getch
#include <string.h> //Para funciones de contar string

using namespace std;

int main()
{
    char frase[60], rep[100], temporal[100];
    char pal;
    int longitud, i, j, inicial, acertado = 0, temp = 0, oportunidades = 6;
    int repetido = 0, gano = 0;
	int dibujo();
    cout << "\tJuego del Ahorcado\n";
    cout << "\tEn lenguaje C++\n";
    cout << "\tHecho por Carlos Hernandez\n";
    cout << "Introduzca la palabra a adivinar: ";
    cin >> frase;

    system("cls");

    longitud = 0;
    inicial = 0;
    j = 0;

    rep[0] = ' ';
    rep[1] = '\0';

    do
    {
        system("cls");
        temp = 0;

        if (inicial == 0)
        {
            for (i = 0; i < strlen(frase); i++)
            {
                if (frase[i] == ' ')
                {
                    temporal[i] = ' ';
                    longitud++;
                }
                else
                {
                    temporal[i] = '_';
                    longitud++;
                }
            }
        }

        inicial = 1;

        temporal[longitud] = '\0';

        for (i = 0; i < strlen(rep); i++)
        {
            if (rep[i] == pal)
            {
                repetido = 1;
                break;
            }
            else
            {
                repetido = 0;
            }
        }

        if (repetido == 0)
        {
            for (i = 0; i < strlen(frase); i++)
            {
                if (frase[i] == pal)
                {
                    temporal[i] = pal;
                    acertado++;
                    temp = 1;
                }
            }
        }

        if (repetido == 0)
        {
            if (temp == 0)
            {
                oportunidades = oportunidades -1;
    			void dibujo();{

    switch(oportunidades) {
        case 5:
                cout<<"  |---------  "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"__|__ "<<endl;
                break;
        case 4:
                cout<<"  |---------  "<<endl;
                cout<<"  |      | "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"__|__ "<<endl;
                break;
        case 3:
                cout<<"  |---------  "<<endl;
                cout<<"  |      | "<<endl;
                cout<<"  |      O"<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"__|__ "<<endl;
                break;
        case 2:
                cout<<"  |---------  "<<endl;
                cout<<"  |      | "<<endl;
                cout<<"  |      O"<<endl;
                cout<<"  |      |"<<endl;
                cout<<"  |   "<<endl;
                cout<<"  |   "<<endl;
                cout<<"__|__ "<<endl;
                break;
        case 1:
                cout<<"  |---------  "<<endl;
                cout<<"  |      | "<<endl;
                cout<<"  |      O"<<endl;
                cout<<"  |     /|\\"<<endl;
                cout<<"  |      |"<<endl;
                cout<<"  |   "<<endl;
                cout<<"__|__ "<<endl;
                break;
        case 0:
        default:
                cout<<"  |---------  "<<endl;
                cout<<"  |      | "<<endl;
                cout<<"  |      O"<<endl;
                cout<<"  |     /|\\"<<endl;
                cout<<"  |      |"<<endl;
                cout<<"  |     / \\"<<endl;
                cout<<"__|__ "<<endl;
                break;
			}
		}
            }
        }
        else
        {
            cout << "Ya se ha introducido este caracter";
            cout << "\n\n";
        }

        cout << "\n";

        for (i = 0; i < strlen(temporal); i++)
        {
            cout << " " << temporal[i] << " ";
        }

        cout << "\n";

        if (strcmp(frase, temporal) == 0)
        {
            gano = 1;
            break;
        }

        cout << "\n";
        cout << "Letras Acertadas: " << acertado;
        cout << "\n";
        cout << "Oportunidades Restantes: " << oportunidades;
        cout << "\n";

        rep[j] = pal;
        j++;

        if (oportunidades == 0)
        {
            break;
        }

        cout << "Introduzca una letra:\n";
        cin >> pal;

    } while (oportunidades != 0);

    if (gano == true)
    {
        cout << "\n\n";
        cout << "Enhorabuena, has ganado.";
    }
    else
    {
        cout << "\n\n";
        cout << "Has perdido.";
    }

    cout << endl
         << endl;

	system("pause");
	return 0;
}
