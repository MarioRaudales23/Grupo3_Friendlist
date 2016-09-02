#pragma once 
#include "contactos.h"
#include <string>
using std::string;

class companeros:public contactos{
	private:
		string clase_compa;
		string trabaja_compa;
	public:
		companeros(string,string,string,string);
		virtual ~companeros();
		virtual string toString()const;
}