#pragma once
#include <string>
#include <map>

	using namespace std;

	class Contact
	{
	private:
		string Nom;
		int numero;
		string civilite;
		string adressePostale;
		string mail;
		//map<Contact, int> Contacts;

	public:
		/*map<int, Contact> getContact();

		void setContacts(map<int, Contact> Contacts);*/
		Contact();
		Contact(string Nom, int numero, string mail, string civilite, string adressePostale);

		string  getcivilite();
		void setcivilite(string civ_p);
		void affiche();

		string getadressePostale();
		void setadressePostale(string cpos_p);

		string getNom();
		void setNom(string nom_p);

		int getnumero();
		void setnumero(int num_p);

		string getmail();
		void setmail(string mail_p);
		
		bool operator<(const Contact c ) const;

	};


