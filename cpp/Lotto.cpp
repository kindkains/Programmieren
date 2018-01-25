#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    int eingabe;
    double jahreszins, zinssatz, monat;
    
    while(eingabe!=0)
    {    
    system("cls");
    cout << "********************************************" << endl;
    cout << "*Zinseinkommen eines Lottogewinns berechnen*" << endl;
    cout << "********(zum Beenden 0 eingeben)************" << endl;
    cout << "********************************************" << endl << endl << endl;
    
    cout << "H\x94he des Lottogewinns eingeben: ";
    cin >> eingabe;
    cout << "H\x94he des Zinssatzes (in %) eingeben: ";
    cin >> zinssatz;
    
    jahreszins = eingabe * zinssatz / 100;
    monat = jahreszins / 12;
    
    cout << endl << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Die j\x84hrlichen Zinsen betragen: " << jahreszins << " Euro" << endl;
    cout << "Die monatlichen Zinsen betragen: " << monat << " Euro" << endl << endl;
    system("PAUSE");
    
    }

    return EXIT_SUCCESS;
}
