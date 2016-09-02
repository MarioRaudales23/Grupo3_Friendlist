#include "contactos.h"
#include "familiares.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

using namespace std;

familiares::familiares(string nombre,string celular,string consan,string parentes):contactos(nombre,celular),consanguinidad_fam(consan),parentesco_fam(parentes){

}

familiares::~familiares(){

}

string familiares::toString()const{
	stringstream ss;
	ss <<contactos::toString()<< "Consanguinidad: " << consanguinidad_fam << ", Parentesco: " << parentesco_fam;
	return ss.str();
}