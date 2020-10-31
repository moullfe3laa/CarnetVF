#include "CarnetD.h"
#include <iostream>
#include <fstream>
#include <map>
#include <string.h>

CarnetD::CarnetD()
{
}

CarnetD::CarnetD(map<int, Contact> Contacts)
{
	this->Contacts = Contacts;
}

CarnetD::~CarnetD()
{
}

map<int, Contact> CarnetD::getContact()
{
	return map<int, Contact>();
}

void CarnetD::setContact(map<int, Contact> Contacts)
{
}

void CarnetD::affiche()
{
    map<int,Contact>::iterator it;
    for (it = Contacts.begin(); it != Contacts.end(); it++)
    {   
        Contact p = (it->second);
        p.affiche();
    }
}
void  CarnetD::ajouter(Contact c, int id)
{
    ofstream myfile("Carnet.csv", ios::out | ios::app);
    if (myfile)
    {
        string Nom, mail, civilite, adressePostale;
        int numero = c.getnumero();

        cout << "Nom ? \n" << endl;
        cin >> Nom;
        cout << "numero \n?" << endl;
        cin >> numero;
        cout << "mail ? \n" << endl;
        cin >> mail;
        cout << "civilite ? \n" << endl;
        cin >> civilite;
        cout << "adresse ? \n" << endl;
        cin >> adressePostale;
        Contact c(Nom, numero, mail, civilite, adressePostale);
       
        map<int, Contact>::iterator mapIt = Contacts.end();
        pair<int, Contact> paire(id,c);
        Contacts.insert(mapIt, paire);
        myfile<<id <<","  << Nom << ","
            << numero << ", "
            << mail << ", "
            << civilite << ", "
            << adressePostale
            << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}

void CarnetD::modifier()
{
    int id;
    cout << "id \n" << endl;
    cin >> id;
    map<int, Contact>::iterator it;
    for (it = Contacts.begin(); it != Contacts.end(); it++)
    {
        if ((*it).first == id)
        {
            Contact c;
            ajouter(c, id);   
        }
        break;
    }
}

void CarnetD::supprimer()
{
    int id  ;
    cout << "id \n" << endl;
    cin >>  id ;
    map<int, Contact>::iterator it;
    for (it = Contacts.begin(); it != Contacts.end(); it++)
    {            
        if ((*it).first == id)
        {
            Contacts.erase(it);
        }    
        break;
    }
}
