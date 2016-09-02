#pragma once 
#include "contactos.h"
#include <string>
using std::string;

class familiares:public contactos{
	private:
		string consanguinidad_fam;
		string parentesco_fam;
	public:
		familiares(string,string,string,string);
		virtual ~familiares();
		virtual string toString()const;
}