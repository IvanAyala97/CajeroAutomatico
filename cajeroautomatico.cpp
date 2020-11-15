#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	int intentos,nip_ingresado,nip_actual=1234,opcion;
	float saldo = 2500,transferencia,saldoretiro,retiro,deposito,saldodeposito,saldonuevo;
	string repetir="y";

	cout<<"Ingrese su nip: "<<endl;
	cin>>nip_ingresado;
	cout<<"\n";	
	system("cls");
	if (nip_ingresado==nip_actual){   //COMPARATIVA DE LOS NIP PARA DAR LUZ VERDE AL ACCESO
		cout<<"ACCESO APROBADO!!"<<endl;
		cout<<"\n";
	cout<<"******************************"<<endl;
	cout<<"*         BIENVENIDO         *"<<endl;
	cout<<"*			     *"<<endl;
	cout<<"******************************"<<endl;
	cout<<"\n";
		while(repetir!="n"){ //while que repetirá el ciclo, cada vez que el usuario presione y o Y, de lo contrario, el ciclo termina y cierra el programa
		cout<<"Ingrese la accion a realizar:"<<"\n"<< "1.Transferir dinero"<<"\n"<<"2.Consultar saldo "<<"\n"<<"3.Retirar dinero "<<"\n"<<"4.Depositar"<<"\n"<<"5.Cambiar nip"<<"\n"<<"6.Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
			switch (opcion){ //SE UTILIZA UN SWITCH PARA LAS OPCIONES DEL CAJERO
				case 1:
					cout<<"Su saldo actual es: "<<saldo<<endl;
					cout<<"Ingrese el monto a transferir: "<<endl;
					cin>>transferencia;	
					if(transferencia > saldo){ // SI EL SALDO ES MENOR A LA TRANSFERENCIA, SE LE INFORMARA AL USUARIO QUE NO HAY FONDOS SUFICIENTES
						cout<<"********************"<<endl;
						cout<<"Saldo insuficiente!!!! "<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					} else{
						saldonuevo=(saldo-transferencia); //SI EL MONTO ES MENOR, SE LE MUESTRA EN PANTALLA SU SALDO RESTANTE
						cout<<"Su saldo restante es: "<<saldonuevo<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
					}	
					case 2:
						cout<<"Su Saldo actual es: "<<saldonuevo<<endl; //SE LE MUESTRA AL USUARIO SU SALDO ACTUAL
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
					case 3:
						cout<<"SU saldo actual es de :"<<saldonuevo<<endl;
						cout<<"Ingrese la cantidad a retirar: "<<endl;
						cin>>retiro;
						system("cls");
						if(retiro>saldonuevo){
						cout<<"Saldo insuficiente para la transaccion!!"<<endl; //SI QUIERE RETIRAR MAS DE LO QUE HAY EN CUENTA, SE LE AVISA AL USUARIO EN CONSOLA
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					}
					else{
						saldonuevo=(saldonuevo-retiro);
						
						cout<<"Su nuevo saldo es: "<<saldonuevo<<endl;// UNA VEZ REALIZADA EL RETIRO, SE LE INFORMA AL USUARIO SU SALDO RESTANTE
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					}
					break;
					case 4:
						cout<<"Su saldo actual es de :"<<saldonuevo<<endl;
						cout<<"Ingrese la cantidad a depositar: "<<endl;
						cin>>deposito;
						saldodeposito=deposito+saldonuevo;
						cout<<"Su saldo actual es de: "<<saldodeposito<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;	
					case 5:
						cout<<"Ingrese su antiguo NIP: "<<endl;
						cin>>nip_actual;
						cout<<"Ingrese su nuevo NIP: "<<endl;
						cin>>nip_ingresado;
						
						nip_actual=nip_ingresado;
								
						cout<<"*************************"<<endl;
						cout<<"NIP ACTUALIZADO!!"<<endl;
						cout<<nip_actual<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
						
					case 6:
						return 0;					
			}
	}
}
		 else {
		 			while(nip_actual!=nip_ingresado){
					cout<<"XXXXXXXXXX ACCESO DENEGADO XXXXXXXXXX"<<endl; // SE LE AVISARA AL USUARIO QUE SU NIP ES INCORRECTO Y SE LE NEGARA EL ACCESO HASTA QUE LO INGRESE CORRECTAMENTE
					cout<<"Intentelo de nuevo" <<endl;
					cout<<"Ingrese su nip: "<<endl;
					cin>>nip_ingresado;
			}
					if (nip_ingresado==nip_actual){
						cout<<"ACCESO APROBADO!!"<<endl;			
	cout<<"******************************"<<endl;
	cout<<"*         BIENVENIDO         *"<<endl;
	cout<<"*			     *"<<endl;
	cout<<"******************************"<<endl;
	cout<<"\n";	
		while(repetir!="n"){
										
		cout<<"Ingrese la accion a realizar:"<<"\n"<< "1.Transferir dinero"<<"\n"<<"2.Consultar saldo "<<"\n"<<"3.Retirar dinero "<<"\n"<<"4.Depositar"<<"\n"<<"5.Cambiar nip"<<"\n"<<"6.Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
			switch (opcion){ //SE UTILIZA UN SWITCH PARA LAS OPCIONES DEL CAJERO
				case 1:
					cout<<"Su saldo actual es: "<<saldo<<endl;
					cout<<"Ingrese el monto a transferir: "<<endl;
					cin>>transferencia;	
					if(transferencia > saldo){ // SI EL SALDO ES MENOR A LA TRANSFERENCIA, SE LE INFORMARA AL USUARIO QUE NO HAY FONDOS SUFICIENTES
						cout<<"********************"<<endl;
						cout<<"Saldo insuficiente!!!! "<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					} else{
						saldonuevo=(saldo-transferencia); //SI EL MONTO ES MENOR, SE LE MUESTRA EN PANTALLA SU SALDO RESTANTE
						cout<<"Su saldo restante es: "<<saldonuevo<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
					}	
					case 2:
						cout<<"Su Saldo actual es: "<<saldonuevo<<endl; //SE LE MUESTRA AL USUARIO SU SALDO ACTUAL
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
					case 3:
						cout<<"SU saldo actual es de :"<<saldonuevo<<endl;
						cout<<"Ingrese la cantidad a retirar: "<<endl;
						cin>>retiro;
						if(retiro>saldonuevo){
						cout<<"Saldo insuficiente para la transaccion!!"<<endl; //SI QUIERE RETIRAR MAS DE LO QUE HAY EN CUENTA, SE LE AVISA AL USUARIO EN CONSOLA
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					}
					else{
						saldonuevo=(saldonuevo-retiro);
						
						cout<<"Su nuevo saldo es: "<<saldonuevo<<endl;// UNA VEZ REALIZADA EL RETIRO, SE LE INFORMA AL USUARIO SU SALDO RESTANTE
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
					}
					break;
					case 4:
						cout<<"Su saldo actual es de :"<<saldonuevo<<endl;
						cout<<"Ingrese la cantidad a depositar: "<<endl;
						cin>>deposito;
						saldodeposito=deposito+saldonuevo;
						cout<<"Su saldo actual es de: "<<saldodeposito<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;	
					case 5:
						cout<<"Ingrese su antiguo NIP: "<<endl;
						cin>>nip_actual;
						cout<<"Ingrese su nuevo NIP: "<<endl;
						cin>>nip_ingresado;
						
						nip_actual=nip_ingresado;
								
						cout<<"*************************"<<endl;
						cout<<"NIP ACTUALIZADO!!"<<endl;
						cout<<nip_actual<<endl;
						cout<<"Quieres realizar otro movimiento? Y/N"<<endl;
						cin>>repetir;
						system("cls");
						break;
					case 6:
						return 0;
					}
					}
	}
}
return 0;	
}

