#include <cstdlib>
#include <iostream>
using namespace std;

class vektor
 {
      // Die Eigenschaften
 public:
      double x;
      double y;
      
      // Konstruktor
      vektor()
      {
              x = 0;
              y = 0;
      }
      
      // Methoden
      void addieren(vektor v2)
       {
           x = x+v2.x;
           y = y+v2.y;
       }
       
      void subtrahieren(vektor v3)
       {
           x = x-v3.x;
           y = y-v3.y;
       }
       
      void ausgeben()
       {
            cout << "(" << x << "," << y << ")";
       }
 };

int main()
{
    vektor vekt1;
    vektor vekt2;
    vektor vekt3;
    
    vekt1.x = 1;
    vekt1.y = 2;
    vekt2.x = 10;
    vekt2.y = 20;
    vekt3.x = 6;
    vekt3.y = 8;
    
    // Vektor ausgeben
    cout << "Vektor 2: ";
    vekt1.ausgeben();
    cout << endl;
    cout << "Vektor 2: ";
    vekt2.ausgeben();
    cout << endl << endl;
    
    // 2. Vektor addieren
    vekt1.addieren(vekt2);
    
    // Vektor nach Addition
    cout << "Vektor1 nach Addition: ";
    vekt1.ausgeben();
    cout << endl;
    
    // 1. Vektor subtrahieren
    vekt1.subtrahieren(vekt2);

    // Vektor nach Subtraktion    
    cout << "Vektor1 nach Subtraktion: ";
    vekt1.ausgeben();
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
