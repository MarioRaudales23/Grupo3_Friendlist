#include "contactos.h"
#include "companeros.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

using namespace std;

companeros::companeros(string nombre,string celular,string clase,string trabaja):contactos(nombre,celular),clase_compa(tiempo),trabaja_compa(trabaja){

}

companeros::~companeros(){

}

string companeros::toString(){
	stringstream ss;
	ss <<contactos::toString()<< "Clases Juntos: " << clase_compa << ", Trabajan Juntos: "<<trabaja_compa;
	return ss.str();
}