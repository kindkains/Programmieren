#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ausgabe, i;
    int x = 1;
    
    for(i=1;i<=100;i++)
    
    {
                       if(x % 10 != 0)
                       {
                            ausgabe = x*x;
                            cout.width(5);
                            cout << x << " zum Quadrat ergibt " << ausgabe << endl;
                            x++;
                       }
                       
                       else
                       {
                           ausgabe = x*x;
                           cout.width(5);
                           cout << x << " zum Quadrat ergibt " << ausgabe << endl << endl;
                           system("PAUSE");
                           cout << endl;
                           x++;
                       }
                      
    }
    
       
    return EXIT_SUCCESS;
}
