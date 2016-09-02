#include "contactos.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

using namespace std;

contactos::contactos(string nombre,string celular):nombre_con(nombre),celular_con(celular){

}

contactos::~contactos(){

}

string contactos::toString(){
	stringstream ss;
	ss << "Contactos: Nombre: " << nombre_con << ", Celular: " celular_con;
	return ss.str();
}