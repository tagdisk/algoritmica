#include <iostream>
#include <conio.h>

#ifdef _WIN32
	#include <windows.h>
#endif

using namespace std;

#define SPACE 32
string s;

class control_tower{
    private:
    string opc = "5";

    public:
	control_tower();
	int reg;
    void nav();
    void clear();

    protected:
	int av=0, c=0, asiento=0, m=0, i;
	int av1[49], av2[49], av3[49], av4[49], av5[49], av6[49], av7[49], av8[49], av9[49], av10[49];
	bool is_numeric(string);
	int intval(string);
};

control_tower::control_tower(){
	for(i=0;i<49;i++) av1[i]=0;
   	for(i=0;i<49;i++) av2[i]=0;
   	for(i=0;i<49;i++) av3[i]=0;
	for(i=0;i<49;i++) av4[i]=0;
	for(i=0;i<49;i++) av5[i]=0;
	for(i=0;i<49;i++) av6[i]=0;
	for(i=0;i<49;i++) av7[i]=0;
	for(i=0;i<49;i++) av8[i]=0;
	for(i=0;i<49;i++) av9[i]=0;
	for(i=0;i<49;i++) av10[i]=0;
}

void control_tower::nav(){
	bool repeat = true;
	string Err = "Tu opcion es invalida, por favor, vuelva a intentarlo.";

	do{
		clear();
		cout<<"========================================="<<endl;
		cout<<"Bienvenido a la Torre de Control: TAGDISK"<<endl;
		cout<<"========================================="<<endl;
		cout<<"1. Reservar"<<endl;
		cout<<"2. Confirmar Reserva"<<endl;
		cout<<"3. Cancelar Reserva"<<endl;
		cout<<"4. Estado del Avion"<<endl;
		cout<<"5. Salir"<<endl<<endl;

		if(!is_numeric(opc)){
			cout<<Err<<endl;
		}else if(intval(opc) < 1 || intval(opc) > 5){
			cout<<Err<<endl;
		}
		
		cout<<"Mi opcion es: ";cin>>opc;

		if(!is_numeric(opc)){
			cout<<Err<<endl;
		}else if(intval(opc) < 1 || intval(opc) > 5){
			cout<<Err<<endl;
		}else{
			repeat = false;
		}

	}while(repeat!=false);

	reg=intval(opc);
}

class reserve : public control_tower{
    public:
    void reserve_plane();
};

void reserve::reserve_plane(){
	clear();
	cout<<"================="<<endl;
	cout<<"DESEAS VIAJAR EN:"<<endl;
	cout<<"================="<<endl;
	cout<<"Avion No. 1"<<endl;
	cout<<"Avion No. 2"<<endl;
	cout<<"Avion No. 3"<<endl;
	cout<<"Avion No. 4"<<endl;
	cout<<"Avion No. 5"<<endl;
	cout<<"Avion No. 6"<<endl;
	cout<<"Avion No. 7"<<endl;
	cout<<"Avion No. 8"<<endl;
	cout<<"Avion No. 9"<<endl;
	cout<<"Avion No. 10"<<endl<<endl;

	cout<<"Eliga el numero correspondiente al Avion deseado: ";cin>>av;

	clear();
	cout<<"==========================="<<endl;
	cout<<"EN QUE CLASE DESEAS VIAJAR:"<<endl;
	cout<<"==========================="<<endl;
	cout<<"1. Primera Clase"<<endl;
	cout<<"2. Segunda Clase"<<endl<<endl;

	cout<<"Ingrese la opcion correspondiente: ";cin>>c;

	if(c==1){
		do {
			clear();
			cout<<"Introduzca un numero de Asiento entre 0 y 14: ";cin>>asiento;
			if((asiento<0)||(asiento>14)){
				cout<<endl<<"Numero de Asiento no valido...";
			}
		}while((asiento<0) || (asiento>14));

	}else{
		do{
			clear();
			cout<<"Introduzca un numero de Asiento entre 15 y 49: ";cin>>asiento;
			if((asiento<15)||(asiento>49)){
				cout<<endl<<"Numero de Asiento no valido...";
			}
		}while((asiento<15)||(asiento>49));
	}

	clear();
	switch(av){
		case 1:
			if(av1[asiento]==0){
				av1[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 2:
			if(av2[asiento]==0){
				av2[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 3:
			if(av3[asiento]==0){
				av3[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 4:
			if(av4[asiento]==0){
				av4[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 5:
			if(av5[asiento]==0){
				av5[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 6:
			if(av6[asiento]==0){
				av6[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 7:
			if(av7[asiento]==0){
				av7[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 8:
			if(av8[asiento]==0){
				av8[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 9:
			if(av9[asiento]==0){
				av9[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;

		case 10:
			if(av10[asiento]==0){
				av10[asiento]=1;
				cout<<"Su operacion se realizo con exito...";
			}else{
				cout<<"El Asiento no esta Disponible...";
			}
		break;
		
		default:
			cout<<"Error al elegir opcion...";
		break;
	}

}

class confirm_reservation : public control_tower{
    public:
    void reservation();
};

void confirm_reservation::reservation(){
	clear();
	cout<<"Para confirmar su Reserva ingrese el numero de Avion en que reservo: ";cin>>av;
	clear();
	cout<<"Ingrese El numero de Asiento que reservo: ";cin>>asiento;

	clear();
	switch(av){
		case 1:
			if(av1[asiento]==1){
				av1[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 2:
			if(av2[asiento]==1){
				av2[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 3:
			if(av3[asiento]==1){
				av3[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 4:
			if(av4[asiento]==1){
				av4[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 5:
			if(av5[asiento]==1){
				av5[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 6:
			if(av6[asiento]==1){
				av6[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 7:
			if(av7[asiento]==1){
				av7[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 8:
			if(av8[asiento]==1){
				av8[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 9:
			if(av9[asiento]==1){
				av9[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		case 10:
			if(av10[asiento]==1){
				av10[asiento]=2;
				cout<<"Su confirmacion se realizo con exito...";
			}else{
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";
			}
		break;

		default:
			cout<<"Error al elegir opcion...";
		break;
	}
}

class cancel_reservation : public control_tower{
    public:
    void cancel();
};

void cancel_reservation::cancel(){
	clear();
	cout<<"Para cancelar su Reserva ingrese el numero de Avion en que reservo: ";cin>>av;
	clear();
	cout<<"Ingrese El numero de Asiento que reservo: ";cin>>asiento;

	clear();
	switch(av){
		case 1:
			if(av1[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av1[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av1[asiento]==1){
				av1[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 2:
			if(av2[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av2[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av2[asiento]==1){
				av2[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 3:
			if(av3[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av3[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av3[asiento]==1){
				av3[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 4:
			if(av4[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av4[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av4[asiento]==1){
				av4[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 5:
			if(av5[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av5[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av5[asiento]==1){
				av5[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 6:
			if(av6[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av6[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av6[asiento]==1){
				av6[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 7:
			if(av7[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av7[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av7[asiento]==1){
				av7[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 8:
			if(av8[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av8[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av8[asiento]==1){
				av8[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 9:
			if(av9[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av9[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av9[asiento]==1){
				av9[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		case 10:
			if(av10[asiento]==0){
				cout<<"El Asiento no ha sido Reservado aun, por favor, reservelo antes...";

			}else if(av10[asiento]==2){
				cout<<"El Asiento ya no se puede Cancelar, Gracias...";

			}else if(av10[asiento]==1){
				av10[asiento]=0;
				cout<<"Su Reserva ha sido Cancelada...";
			}
		break;

		default:
			cout<<"Error al elegir opcion...";
		break;
	}
	
}

class status_plane : public control_tower{
    public:
    void status();
};

void status_plane::status(){
	clear();
	cout<<"==========================="<<endl;
	cout<<"QUE AVION DESEAS VERIFICAR:"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Avion No. 1"<<endl;
	cout<<"Avion No. 2"<<endl;
	cout<<"Avion No. 3"<<endl;
	cout<<"Avion No. 4"<<endl;
	cout<<"Avion No. 5"<<endl;
	cout<<"Avion No. 6"<<endl;
	cout<<"Avion No. 7"<<endl;
	cout<<"Avion No. 8"<<endl;
	cout<<"Avion No. 9"<<endl;
	cout<<"Avion No. 10"<<endl<<endl;

	cout<<"Eliga el numero correspondiente al Avion deseado: ";cin>>av;

	clear();
	cout<<"====================="<<endl;
	cout<<"QUE DESEAS VERIFICAR:"<<endl;
	cout<<"====================="<<endl;
	cout<<"1. Reservas"<<endl;
	cout<<"2. Confirmadas"<<endl;
	cout<<"3. Asientos Vacios"<<endl<<endl;

	cout<<"Eliga el numero correspondiente a verificar: ";cin>>m;
	
	clear();
	switch(av){
		case 1:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av1[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av1[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av1[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 2:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av2[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av2[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av2[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 3:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av3[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av3[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av3[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 4:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av4[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av4[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av4[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 5:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av5[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av5[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av5[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 6:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av6[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av6[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av6[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 7:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av7[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av7[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av7[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 8:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av8[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av8[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av8[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 9:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av9[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av9[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av9[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		case 10:
			if(m==1){
				cout<<"Los asientos Reservados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av10[i]==1){
						cout<<i<<"  ";
					}
				}

			}else if(m==2){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av10[i]==2){
						cout<<i<<"  ";
					}
				}
			}else if(m==3){
				cout<<"Los asientos Confirmados son:"<<endl;
				for(i=0;i<=49;i++){ 
					if(av10[i]==0){
						cout<<i<<"  ";
					}
				}
			}
		break;

		default:
			cout<<"Error al elegir opcion...";
		break;
	}
}

bool control_tower::is_numeric(string x){
    while(s.size() > 1 && x[0] == ' ') x.erase(x.begin());

    int ini = x[0] == '-';

    for(int i=ini;i<x.size();i++){
        if('0' <= x[i] && x[i] <= '9'){
            continue;
		}else{
            return false;
		}
	}
    return true;
}

int control_tower::intval(string x){
    while(s.size() > 1 && x[0] == ' ') x.erase(x.begin());

    int ini = x[0] == '-', res = 0;

    for(int i=ini;i<x.size();i++){
        res *= 10;
        res += x[i] - '0';
    }
    return ini?-res:res;
}

void control_tower::clear(){
	#ifdef _WIN32
		system("cls");
	#else
	 	system("clear");
	#endif
}

int main(){
	bool repeat = true;
	control_tower* func;
	reserve obj_1;
	confirm_reservation obj_2;
	cancel_reservation obj_3;
	status_plane obj_4;

	do{
		func = new control_tower();
		func->clear();
		func->nav();

		switch(func->reg){
			case 1: obj_1.reserve_plane(); break;
			case 2: obj_2.reservation(); break;
			case 3: obj_3.cancel(); break;
			case 4: obj_4.status(); break;
			default: repeat = false; continue; break;
		}

		cout<<endl<<endl<<"Si deseas ir al menu principal, por favor, presione cualquier tecla para continuar..";

		getch();
	}while(repeat != false);
	
	cout<<endl<<endl;
	return 0;
}