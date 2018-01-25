#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int ausgabe, i;
    int x = 1;
    
    for(i=1;i<=20;i++)
    
    {
                      ausgabe = x*x;
                      x++;
                      cout.width(5);
                      cout << ausgabe << endl;
                      
    }
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
