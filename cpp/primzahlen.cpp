#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    const int MaxPrimzahl=2147483647;
    int Primzahl, Divisor;
    bool istEinePrimzahl;
    
    cout << "1, 2";
    
    for (Primzahl=3; Primzahl<=MaxPrimzahl; Primzahl++)
    {
        istEinePrimzahl = true;
        // Pruefe, ob Primzahl wirklich eine Primzahl ist
        for (Divisor=2; istEinePrimzahl && Divisor<Primzahl;
             Divisor++)
        {
            // Ist das restlos teilbar?
            if (0==Primzahl % Divisor)
            {
                // Zahl ist teilbar, ist also keine Primzahl!
                istEinePrimzahl = false;
            }
        }
        // Pruefung ist beendet.
        // Wenn es eine Primzahl ist, ausgeben!
        if (istEinePrimzahl)
        {
            cout << ", " << Primzahl;
        }
    }
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
