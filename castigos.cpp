#include "contactos.h"
#include "castigos.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

using namespace std;
castigos::castigos():contactos(){
	
}
castigos::castigos(string nombre,string celular,int tiempo,string username):contactos(nombre,celular),puntacion_cas(tiempo),tipo_cas(username){

}

castigos::~castigos(){

}

string castigos::toString()const{
	stringstream ss;
	ss <<contactos::toString()<< "Puntacion: " << puntacion_cas << ", Tipo Castigo: "<<tipo_cas;
	return ss.str();
}