#include <cstdlib>
#include <iostream>

using namespace std;

struct konto
    {
           string kundenname;
           string kontonummer;
           double kontostand;
           int kredit;
    };

int main()
{
    konto meinKonto;
    
    meinKonto.kundenname = "Sandro Isoletta";
    meinKonto.kontonummer = "00123567";
    meinKonto.kontostand = 8500;
    meinKonto.kredit = 20000;
    
    cout << "Konto von " << meinKonto.kundenname << endl << endl;
    cout << "\tKontonummer:         " << meinKonto.kontonummer << endl;
    cout << "\tKontostand:          " << meinKonto.kontostand << " Euro" << endl;
    cout << "\tUeberziehungskredit: " << meinKonto.kredit << " Euro" << endl;
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
