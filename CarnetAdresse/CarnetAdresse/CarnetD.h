#pragma once
#include <map>
#include "Contact.h"
class CarnetD
{
private:
	map<int, Contact> Contacts;
public:
	CarnetD();
	CarnetD(map<int, Contact> Contacts);
	~CarnetD();
	map<int, Contact> getContact();
	void setContact(map<int, Contact> Contacts);
	void affiche();
	void ajouter(Contact c, int id);
	void modifier();
	void supprimer();
};

