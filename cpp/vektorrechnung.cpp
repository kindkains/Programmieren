#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int befehl;
    
    cout << endl;
    cout << "Men\x81 " << endl; // \x84 = ä \x94 = ö \x81 = ü
    cout << " Vektoren eingeben             <1>" << endl;
    cout << " Vektoren addieren             <2>" << endl;
    cout << " Vektoren subtrahieren         <3>" << endl;
    cout << " Skalarprodukt                 <4>" << endl;
    cout << " Vektorprodukt                 <5>" << endl;
    cout << " L\x84nge berechnen               <6>" << endl;
    cout << " Programm beenden              <0>" << endl;
    cout << endl;
    
    cout << " Ihre Eingabe : ";
    cin >> befehl;
    
    // Befehl bearbeiten
    
    switch(befehl)
     {
                  case 0: cout << endl;
                          cout << "Programm beenden" << endl << endl;
                          break;
                  case 1: cout << endl;
                          cout << "Vektor eingeben" << endl << endl;
                          break;
                  case 2: cout << endl;
                          cout << "Vektoren addieren" << endl << endl;
                          break;
                  case 3: cout << endl;
                          cout << "Vektoren subrahieren" << endl << endl;
                          break;
                  case 4: cout << endl;
                          cout << "Skalarprodukt" << endl << endl;
                          break;
                  case 5: cout << endl;
                          cout << "Vektorprodukt" << endl << endl;
                          break;
                  case 6: cout << endl;
                          cout << "L\x84nge des Vektors" << endl << endl;
                          break;
                  default: cout << endl;
                           cout << "Ung\x81ltige Eingabe!!!" << endl << endl;
                           break;
     }
     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
