#pragma once

#include <string>
using std::string;

class contactos{
	private:
		string nombre_con;
		string celular_con;
	public:
		contactos();
		contactos(string,string);
		virtual ~contactos();
		virtual string toString()const;
};