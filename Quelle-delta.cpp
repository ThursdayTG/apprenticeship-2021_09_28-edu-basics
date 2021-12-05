#include<iostream>
#include<string>
using namespace std;

void main()
{
	// variable declaration
	int		age;			// int, integer - declares a variable, natural number
	float	height;			// float, float number - declares a variable, float comma number; alternative to float for comma numbers: double (apparently more precise or smth, lol)
	char	gender;			// char, character - declares a variable, only 1 character
	string	vn, nn;			// string, char array in cpp - declares a variable, unlimited characters, requires #include<string>
	bool	vaxxed;			// bool, boolean - declares a binary variable

	string	addr_mf;		// address male female ("Herr", "Frau")
	string	addr_you_sp;	// address formal / informal you second person ("Sie", "du")
	string	addr_you_po;	// address formal / informal you possessive ("Ihr", "dein")
	string	addr_you_vb;	// address formal / informal you verb ("sind", "bist")


	// default values for variables
	/*
	int		age = 0;
	float	height = 0;
	char	gender = '0';
	string	vn = "Max",	nn = "Mustermann";
	bool	vaxxed = 1;
	/**/

	// ##### text input ##########
	cout << "Vorname: ";			cin >> vn;			// vn = "Vorname"
	cout << "Nachname: ";			cin >> nn;			// nn = "Nachname"
	cout << "Geschlecht (m/f): ";	cin >> gender;
	cout << "Alter (in Jahren): ";	cin >> age;
	cout << "Groesse (in cm): ";	cin >> height;
	cout << "Geimpft (0/1): ";		cin >> vaxxed;		// vaxxed = "vaccinated"


	// ##### conditions ##########
	if					(gender == 'm')
	{					// male
		addr_mf =		"Herr";
	}
	else if				(gender == 'f')
	{					// female
		addr_mf =		"Frau";
	}
	else
	{					// invalid input
		addr_mf =		"Kohlenstoffbasierte Lebensform";
	}

	if					(age >= 18)
	{					// formal you
		addr_you_sp =	"Sie";
		addr_you_po =	"Ihr";
		addr_you_vb =	"sind";
	}
	else if				(age <= 18)
	{					// informal you
		addr_you_sp =	"Du";
		addr_you_po =	"Dein";
		addr_you_vb =	"bist";
	}


	// ##### text output ##########
	cout			// string of special characters that translate to clear screen command - should work both on windows and linux
		<< "\033[2J\033[1;1H";

	cout			// Anrede
		<< "Sehr geehrte/r " << addr_mf << " " << vn << " " << nn << ","
		<< endl

		<< endl		// "<Du/Sie> <bist/sind> ein Hurensohn."
		<< addr_you_sp << " " << addr_you_vb << " " << "ein Hurensohn."

		<< endl		// "<Du/Sie> <bist/sind> ein Hurensohn."
		<< addr_you_sp << " " << addr_you_vb << " " << "ein Hurensohn."
		<< endl << endl;

	system("pause");
}
