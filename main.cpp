# include <iostream>
using std::vector;
#include "contactos.h"
#include <iostream>
# include <vector>
using std::vector;
using namespace std;

int main(int argc, char const *argv[])
{
	vector<contactos> lista;
	int op=0;
	while(op!=3){
		cout<<"------FirendList------"<<endl;
		cout<<"1.-Agregar"<<endl<<"2.-Listar"<<endl<<"3.-Salir"<<endl<<"...";
		cin>>op;
		switch(op){
			case 1:{
				cout<<"------AGREGAR------"<<endl;
				int op2=0;
				cout<<"1.-Amigo"<<endl<<"2.-Familiar"<<endl<<"3.-Compañero"<<endl<<"4.-Castigo"<<endl<<"...";
				cin>>op2;
				string nombre,numero;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Numero: ";
				cin>>numero;
				switch(op2){
					case 1:{
						int tiempo_ami;
						string username;
						cout<<"Cantidad de años que se conocen: ";
						cin>>tiempo_ami;
						cout<<"Nombre de usuario: ";
						cin>>username;
						lista.push_back(amigos(nombre,numero,tiempo_ami,username));
						break;
					}
					case 2:{
						string consanguinidad,parentesco;
						cout<<"Grado de consanguinidad: ";
						cin>>consanguinidad;
						cout<<"Grado de parentesco: ";
						cin>>parentesco;
						lista.push_back(familiares(nombre,numero,consanguinidad,parentesco));
						break;
					}
					case 3:{
						string clase,grupo;
						cout<<"Clase que llevaron juntos: ";
						cin>>clase;
						cout<<"Trabajaria en grupo con esta persona: ";
						cin>>grupo;
						lista.push_back(companeros(nombre,numero,clase,grupo));
						break;
					}
					case 4:{
						int puntos;
						string tecnica;
						cout<<"Puntucacion: ";
						cin>>puntos;
						cout<<"Tecnica utilizada: ";
						cin>>tecnica;
						lista.push_back(castigos(nombre,numero,puntos,tecnica));
						break;
					}
				}
				cout<<"*******"<<endl<<"Agregado"<<endl<<"*******"<<endl;
				

				break;
			}
		}
	}
	return 0;
}