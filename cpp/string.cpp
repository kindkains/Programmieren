#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string name, vorname, gebDatum, ausgabe;
    
    cout << "Bitte Vornamen eingeben: ";
    cin >> vorname;
    cout << "Bitte Nachnamen eingeben: ";
    cin >> name;
    cout << "Bitte Geburtsdatum eingeben: ";
    cin >> gebDatum;
    
    ausgabe = "Hallo " + vorname + " " + name + ", Du bist am " + gebDatum + " geboren. Danke fuer die Teilnahme.";
    
    cout << endl << endl << ausgabe << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
