#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double werte[10];
    int loop;
    
    for(loop=0; loop<10; loop++)
    {
    cout << " Geben Sie einen Wert ein: ";
    cin >> werte[loop];
    }
    
    double mittelwert = 0;
    for(loop=0; loop<10; loop++)
    {
    mittelwert = mittelwert + werte[loop];
    }
    
    cout << endl << "Mittelwert: " << mittelwert/10.0 << endl << endl;

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
