#pragma once 
#include "contactos.h"
#include <string>
using std::string;

class castigos:public contactos{
	private:
		int puntacion_cas;
		string tipo_cas;
	public:
		castigos(string,string,int,string);
		virtual ~castigos();
		virtual string toString()const;
};