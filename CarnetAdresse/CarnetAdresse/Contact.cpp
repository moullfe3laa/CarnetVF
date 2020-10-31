#include "Contact.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

/*map<int, Contact> Contact::getContact()
{
    return map<int, Contact>();
}

void Contact::setContacts(map<int, Contact> Contacts)
{
    //this->Contacts = Contacts;
}*/

Contact::Contact()
{
}
Contact::Contact(string Nom, int numero, string mail, string civilite, string adressePostale)
{
    this->Nom = Nom;
    this->numero = numero;
    this->mail = mail;
    this->civilite = civilite;
    this->adressePostale = adressePostale;

}
void Contact::affiche()
{
    /*map<Contact, int>::iterator it;
    for (it = Contacts.begin(); it != Contacts.end(); it++)
    {
        Contact p = (it->first);
        p.affiche();

            cout << "id : " << it->second << endl;
    }/
    /*map<Produit, int>::iterator it;

for (it = lignesCmde.begin(); it != lignesCmde.end(); it++) {
    Produit p = (it->first);
    p.affiche();
    cout << "Quantite : " << it->second << endl;
}*/

    cout << numero << " " << civilite << " " << Nom << " " << mail << " " << adressePostale << endl;
}

string  Contact::getNom()
{
    return Nom;
}
void Contact::setNom(string nom_p)
{
    this->Nom = nom_p;
}
int Contact::getnumero()
{
    return numero;
}
void Contact::setnumero(int num_p)
{
    this->numero = num_p;
}
string Contact::getmail()
{
    return mail;
}
void Contact::setmail(string mail_p)
{
    this->mail = mail_p;
}
bool Contact::operator<(const Contact c) const
{
    //return (Contacts < c.Contacts);
    return numero < c.numero;
}
string Contact::getcivilite()
{
    return civilite;
}
void Contact::setcivilite(string civ_p)
{
    this->civilite = civ_p;
}
string Contact::getadressePostale()
{
    return adressePostale;
}
void Contact::setadressePostale(string cpos_p)
{
    this->adressePostale = cpos_p;
}
