#include "contactos.h"
#include "amigos.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

using namespace std;

amigos::amigos(string nombre,string celular,int tiempo,string username):contactos(nombre,celular),tiempo_ami(tiempo),username_ami(username){

}

amigos::~amigos(){

}

string amigos::toString(){
	stringstream ss;
	ss <<contactos::toString()<< "Años Juntos: " << tiempo_ami << ", Username: " username_ami,"";
	return ss.str();
}