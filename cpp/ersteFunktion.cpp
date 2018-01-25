#include <cstdlib>
#include <iostream>
#include <cmath>

// Programmieren eigener Funktionen. Meine erste Funktion

using namespace std;

    void gruss(string name)                                 // Da diese Funktion keinen Wert übergeben soll, ist Sie als Datentyp
    {                                                       // Void deklariert. Die Funktion erwartet aber die Übergabe eines Strings
         cout << endl;                                      // (in den Klammern)
         cout << "Hallo " << name << "!" << endl;
         cout << endl;
    }
    
    int quadr(int x)                                        // Meine zweite Funktion soll das Quadrat einer Zahl berechnen. Da sie
    {                                                       // also einen Int-Wert zurück liefern soll, ist sie auch vom Typ Int
         x = x*x;                                           // Außerdem erwartet sie auch, daß ihr ein Int-Wert übergeben wird
         return x;
    }
    
    void gruss1(string name)                                // Wie die erste Funktion, nur dass der Name als Variable übergeben wird
    {
           cout << endl;
           cout << "Bis zum naechsten Mal " << name << ". Auf wiedersehen!" << endl << endl;
    }
    
int main()
{
    int eingabe, quadrat, wurzel;
    string str;
    
    gruss("Sandro");                                                                 /* Hier wird die Funktion "gruss()" aufgerufen
                                                                                        und der String "Sandro" übergeben, so daß
                                                                                        die Funktion meinen Namen ausgeben kann */
    neu:
    cout << "Bitte geben Sie die Zahl ein, aus der ich die Wurzel berechnen soll: ";
    cin >> eingabe;
    
                                                                                    /* Dies ist eine C++ Standard Funktion aus der
                                                                                       Header Datei cmath um die Wurzel aus einer
                                                                                       Zahl zu errechnen */

            if(eingabe >= 0)
            {
                       wurzel = sqrt(eingabe);                                                
                       cout << endl << "Die Wurzel aus " << eingabe << " ist " << wurzel << endl << endl;
            }
            
            else
            {
                cout << endl << "Aus einer negativen Zahl kann keine Wurzel berechnet werden." << endl << endl;
                goto neu;
            }
            

                  
    cout << "Bitte geben Sie die Zahl ein, von der ich das Quadrat berechnen soll: ";
    cin >> eingabe;
    
                                                                                   /* Hier ist der Einsatz meiner eigenen Funktion,
                                                                                      von der obigen inspiriert. Ich habe absichtlich
                                                                                      denselben Code wie bei der offiziellen Funktion
                                                                                      verwendet und es funktioniert ebenso gut */
              quadrat = quadr(eingabe);                                               
              cout << endl << "Das Quadrat aus " << eingabe << " ist " << quadrat << endl << endl;
              
    cout << "Bitte nennen Sie mir Ihren Namen: ";
    cin >> str;
    gruss1(str);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
