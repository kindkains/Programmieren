#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y;
    
    cout << "Wert fuer x eingeben: ";
    cin >> x;
    cout << endl;
    cout << "Wert fuer y eingeben: ";
    cin >> y;
    cout << endl;
    
    x = x + y;
    
    cout << "Das Ergebnis lautet: " << x << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
