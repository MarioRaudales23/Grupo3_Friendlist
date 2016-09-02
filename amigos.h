#pragma once 
#include "contactos.h"
#include <string>
using std::string;

class amigos:public contactos{
	private:
		int tiempo_ami;
		string username_ami;
	public:
		amigos(string,string,int,string);
		virtual ~amigos();
		virtual string toString()const;
}