#include <cstdlib>
#include <iostream>

using namespace std;

double fahrTOcel(double fahrenheit)
{
       double celsius;
       celsius = (fahrenheit - 32) *5.0 / 9.0;
       
       return celsius;
}

int main()
{
    double fahrenheit;
    
    cout << "Temperatur in Fahrenheit: ";
    cin >> fahrenheit;
    
    cout.precision(1);
    cout << fixed << right;
    cout.width(15);
    
    cout << endl
         << fahrenheit << " Grad Fahrenheit entsprechen "
         << fahrTOcel(fahrenheit) << " Grad Celsius" << endl << endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
