#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x = 3.15;
    
    cout.fill('*');                 //Festlegung des F�llzeichens auf * . Standardm��ig w�ren es Leerzeichen
    cout.width(25);                 //Feldl�nge festlegen, d.h. hier werden 25 * ausgegeben
    cout << right;                  //Die Ausgabe soll rechtsb�ndig erfolgen, d.h. erst erscheinen die F�llzeichen, dann erfolgt die
                                    //Ausgabe. W�rde man "left" eingeben, so w�re es linksb�ndig, erst k�me die Ausgabe, dann w�rden
                                    //die F�llzeichen folgen, siehe unten.
    
    cout << x << endl << endl;
    
    cout.fill('.');
    cout.width(25);
    cout << left;
    
    cout << x << endl << endl;

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
