# include <iostream>
#include <vector>
using std::vector;
#include "contactos.h"
#include "familiares.h"
#include "companeros.h"
#include "castigos.h"
#include "amigos.h"
#include <iostream>
#include <fstream>

using namespace std;

void Cargar(vector<contactos*>);


int main(int argc, char const *argv[])
{
	vector<contactos*> lista;
	Cargar(lista);
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
						do
						{
							cout<<"Cantidad de años que se conocen: ";
							cin>>tiempo_ami;
						} while (tiempo_ami<=0);
						cout<<"Nombre de usuario: ";
						cin>>username;
						lista.push_back(new amigos(nombre,numero,tiempo_ami,username));
						break;
					}
					case 2:{
						string consanguinidad,parentesco;
						cout<<"Grado de consanguinidad: ";
						cin>>consanguinidad;
						cout<<"Grado de parentesco: ";
						cin>>parentesco;
						lista.push_back(new familiares(nombre,numero,consanguinidad,parentesco));
						break;
					}
					case 3:{
						string clase,grupo;
						cout<<"Clase que llevaron juntos: ";
						cin>>clase;
						cout<<"Trabajaria en grupo con esta persona: ";
						cin>>grupo;
						lista.push_back(new companeros(nombre,numero,clase,grupo));
						break;
					}
					case 4:{
						int puntos;
						string tecnica;
						do
						{
							cout<<"Puntucacion (1-5): ";
							cin>>puntos;
						} while (puntos<1||puntos>5);
						cout<<"Tecnica utilizada: ";
						cin>>tecnica;
						lista.push_back(new castigos(nombre,numero,puntos,tecnica));
						break;
					}
				}
				cout<<"*******"<<endl<<"Agregado"<<endl<<"*******"<<endl;
				break;
				
			}
			case 2:{
				cout<<"------Listar------"<<endl;
				cout<<lista.size()<<endl;
				for (int i = 0; i < lista.size(); i++)
				{
					cout << "direccion lista[i]: " << lista[i] << endl;
					contactos* temp = (lista[i]);
					cout << "direccion temp: " << temp << endl;
					if (dynamic_cast<amigos*>(lista[i])!=NULL){
						amigos* ami=dynamic_cast<amigos*>(temp);
						cout<<"Entro";
						cout<<ami->toString()<<endl;
					}
					if (dynamic_cast<familiares*>(temp)!=NULL){
						familiares *fami=dynamic_cast<familiares*>(temp);
						cout<<fami->toString()<<endl;
					}
					if (dynamic_cast<companeros*>(temp)!=NULL){
						companeros *compa=dynamic_cast<companeros*>(temp);
						cout<<compa->toString()<<endl;
					}
					if (dynamic_cast<castigos*>(temp)!=NULL){
						castigos *casti=dynamic_cast<castigos*>(temp);
						cout<<casti->toString()<<endl;
					}
				}
				break;
			}
		}
	}
	return 0;
}

void Cargar(vector<contactos*> lista)
{
	const char* file_nameA = "./Amigos.maluma";

	ifstream fileA(file_nameA, ios::in|ios::binary);

	if (fileA.fail())
	{
		fileA.close();

	}
	if (fileA.good())
	{
		while(!fileA.eof())
		{
			amigos amigo;
			fileA.read(reinterpret_cast<char*>(&amigo), sizeof(amigo));
			lista.push_back(amigo);
		}
	}

	const char* file_nameF = "./Familiares.maluma";

	ifstream fileF(file_nameF, ios::in|ios::binary);

	if (fileF.fail())
	{
		fileF.close();
		
	}
	if (fileF.good())
	{
		while(!fileF.eof())
		{
			familiares familiar;
			fileF.read(reinterpret_cast<char*>(&familiar), sizeof(familiar));
			lista.push_back(familiar);
		}
	}

	const char* file_nameC = "./Compañero.maluma";

	ifstream fileC(file_nameC, ios::in|ios::binary);

	if (fileC.fail())
	{
		fileC.close();
		
	}
	if (fileC.good())
	{
		while(!fileC.eof())
		{
			companeros companero;
			fileC.read(reinterpret_cast<char*>(&companero), sizeof(companero));
			lista.push_back(companero);
		}
	}

	const char* file_nameCas = "./Castigo.maluma";

	ifstream fileCas(file_nameCas, ios::in|ios::binary);

	if (fileCas.fail())
	{
		fileCas.close();
		
	}
	if (fileCas.good())
	{
		while(!fileCas.eof())
		{
			castigos castigo;
			fileCas.read(reinterpret_cast<char*>(&castigo), sizeof(castigo));
			lista.push_back(castigo);
		}
	}
}