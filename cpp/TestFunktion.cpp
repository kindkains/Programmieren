#include <cstdlib>
#include <iostream>

using namespace std;

int xxx(int basis, int exponent)
{
    int a = basis;
    
    for(exponent;exponent>1;exponent--)
    {
               a=a*basis;
    }
    return a;
}

int main(int argc, char *argv[])
{
    int basis, exponent, ergebnis;
    
    while((exponent != 0) && (basis != 0))
    {
    system("cls");
    cout << "Zum Beenden bitte 0 als Wert eingeben." << endl << endl;
    cout << "Bitte den Basis-Wert eingeben: ";
    cin >> basis;
    cout << endl << "Bitte den Exponenten eingeben: ";
    cin >> exponent;
    cout << endl << basis << " hoch " << exponent << " ist gleich ";
    
    ergebnis = xxx(basis,exponent);
    cout << ergebnis << endl << endl;
    system("PAUSE");
    }
       
    return EXIT_SUCCESS;
}
