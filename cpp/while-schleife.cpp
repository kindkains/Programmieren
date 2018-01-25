#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 1;
    
    while(i != 0)
    {
            cout << "Bitte Zahl eingeben: ";
            cin >> i;
            cout << endl << "Das Quadrat von " << i << " lautet ";
            i = i*i;
            cout << i << endl << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
