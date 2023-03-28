#include<string.h>
#include<iostream>

using namespace std;


char frase[60]={"programacion"},rep[100], temporal[100];
int longitud=0,i, j=0, inicial=0, acertado=0, temp=0, chance=5;
bool repetido=false,gano=false;

class Ahorcador{
private:
char pal;

public:
void juego(){


do{

temp=0;
if(inicial == 0)  {
for(i=0;i<strlen(frase);i++) {
if(frase[i] == ' ') {
temporal[i] = ' ';
longitud++;

}
else {
temporal[i] = '_';
longitud++;
}
}
}

inicial = 1;

temporal[longitud] = '\0';

for(i=0;i<strlen(rep);i++) {
if(rep[i] == pal)  {
repetido = true;
break;

}
else {
repetido = false;
}
}

if(repetido == false) {
for(i=0;i<strlen(frase);i++){
if(frase[i] == pal) {
temporal[i] = pal;
acertado++;
temp=1;
}
}
}

if(repetido == false) {
if(temp == 0){
chance = chance - 1;
}
}
else {
printf("Caracter Repetido o Ya Consultado");
printf("\n\n");
}

printf("\n");

for(i=0;i<strlen(temporal);i++) {
printf(" %c ",temporal[i]);
}

printf("\n");

if(strcmp(frase,temporal) == 0) {
gano = true;
break;
}

printf("\n");
printf("Letras Acertadas: %d",acertado);
printf("\n");
printf("Oportunidades Restantes: %d",chance);
printf("\n");

rep[j] = pal;
j++;
 
printf("Introduzca un caracter para adivinar la cadena:");
scanf("\n%c",&pal);

}while(chance != 0);

           }

};

class Impresor{
private:
string mensaje;
public:
void setmensaje(string a){
mensaje=a;
}
string getmensaje(){
return mensaje;
}






};

int main(){


rep[0] = ' ';
rep[1] = '\0';

Ahorcador miAhorcador;
Impresor vision;

miAhorcador.juego();

if(gano) {
printf("\n\n");
vision.setmensaje("Felicidades, adivinastes la palabra");
cout<<vision.getmensaje();

}
else {
printf("\n\n");
vision.setmensaje("Perdistes, mejor suerte para la proxima");
cout<<vision.getmensaje();

}


printf("\n\n");

return 0;


}







