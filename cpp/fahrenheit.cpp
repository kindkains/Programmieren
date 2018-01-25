#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double fahrenheit, celsius;
    
    cout << "Temperatur in Fahrenheit: ";
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) *5.0 / 9.0;
    
    cout.precision(1);
    cout << fixed << right;
    cout.width(15);
    
    cout << endl
         << fahrenheit << " Grad Fahrenheit entsprechen "
         << celsius << " Grad Celsius" << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
