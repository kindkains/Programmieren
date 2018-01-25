#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int eingabe;
    double wurzel;
    
    cout << "*************************************************" << endl;
    cout << "**********Programm zur Wurzelberechnung**********" << endl;
    cout << "*************************************************" << endl << endl << endl;
    
    neu:
    cout << "Bitte geben Sie die Zahl ein, aus der ich die Wurzel berechnen soll: ";
    cin >> eingabe;
    
    if(eingabe >= 0)
    {
              wurzel = sqrt(eingabe);
              cout << endl << "Die Wurzel aus " << eingabe << " ist " << wurzel << endl << endl;
    }
    
    else
    {
        cout << endl << "Sie haben einen negativen Wert eingegeben. Die Wurzel von negativen Zahlen kann nicht berechnet werden!"
        << endl << endl;
        goto neu;
    }
    
    cout << "Das Programm wird nun beendet!" << endl << endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
