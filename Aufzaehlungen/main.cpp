#include <iostream>

using namespace std;


// Aufzaehlungen fuer Farben definieren

enum Farbe
{
	// Definition der moeglichen Werte
	rot,	// Zahl 0
	gelb,	// Zahl 1
	blau 	// Zahl 2

	//optional kann ich auch seelber Werte festlegen, so, dass ich nur
	// den startwert angebe, der rest wird automatisch weiter gezaehlt
	//rot = 1,
	//gelb,	
	//blau 

	// ich kann die auch komplett selber definieren
	//rot = 11,
	//gelb = 55,
	//blau = 78

};



int main()
{
	cout << "Programm zu Aufzaehlungen" << endl << endl;


	Farbe Autofarbe;
	Autofarbe = gelb;

	cout << Autofarbe << endl;
	cout << Farbe::rot << Farbe::gelb << Farbe::blau << endl;

	// Abfrage der Autoabfrage mit if statements
	if (Autofarbe == rot)
	{
		cout << "Die Farbe des Autos ist rot" << endl;
	}
	else if (Autofarbe == gelb)
	{
		cout << "Die Farbe des Autos ist gelb" << endl;
	}
	else if (Autofarbe == blau)
	{
		cout << "Die Farbe des Autos ist blau" << endl;
	}
	else
	{
		cout << "Die Farbe des Autos ist unbekannt" << endl;

	}


	// Abfrage der Autofarbe mit switchc -Statements
	switch (Autofarbe)
	{
		case rot:	cout << "Die Farbe des Autos ist rot" << endl; break;
		case gelb:	cout << "Die Farbe des Autos ist gelb" << endl; break;
		case blau:	cout << "Die Farbe des Autos ist blau" << endl; break;
		default:	cout << "Die Farbe des Autos ist unbekannt"	<< endl; break;
	}





	system("pause");
	return 0;
}