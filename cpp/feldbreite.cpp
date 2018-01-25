#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x = 3.15;
    
    cout.fill('*');                 //Festlegung des Füllzeichens auf * . Standardmäßig wären es Leerzeichen
    cout.width(25);                 //Feldlänge festlegen, d.h. hier werden 25 * ausgegeben
    cout << right;                  //Die Ausgabe soll rechtsbündig erfolgen, d.h. erst erscheinen die Füllzeichen, dann erfolgt die
                                    //Ausgabe. Würde man "left" eingeben, so wäre es linksbündig, erst käme die Ausgabe, dann würden
                                    //die Füllzeichen folgen, siehe unten.
    
    cout << x << endl << endl;
    
    cout.fill('.');
    cout.width(25);
    cout << left;
    
    cout << x << endl << endl;

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
