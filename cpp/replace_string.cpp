#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string ausgabe = "Hallo Dirk, wie geht es Dir?";
    string name = "Sandro";
    string test = " heute?";
    
    ausgabe.replace(6,4,name);    /*Dirk beginnt an der 6. Stelle des Strings "ausgabe" (mit 0 anfangen zu zählen). Dirk hat eine
                                    Länge von 4 Buchstaben welches der zweite Parameter ist. Zuletzt wird eine String Variable ("name")
                                    angegeben, welche den Teil im String ersetzen soll*/

    ausgabe.replace(29,7,test);   /*Nachdem der Name "Dirk" durch "Sandro" ersetzt wurde, muss nun beim Zählen der längere Name mit
                                    berücksichtigt werden. Das "?" befindet sich nun an der 29. Stelle, anstatt an der 26.*/
    
    cout << ausgabe << endl << endl;
    
    ausgabe = "Hallo Dirk, wie geht es Dir?";

    ausgabe.insert(10, " und Sandro"); /*Der erste Parameter gibt die Position an, ab der etwas in den String eingeführt werden soll.
                                         Der zweite Parameter ist dann der Teil, der eingefügt wird. Hiert könnte auch eine String
                                         Variable wie oben stehen. */
                                         
    ausgabe.replace(35,3,"Euch");      //"Dir" wird durch "Euch" ersetzt                                   

    cout << ausgabe << endl << endl;
    
    ausgabe.erase(6,9);                //"Dirk und" wird aus dem String gelöscht
    ausgabe.replace(26,4,"Dir");       //"Euch" wird wieder durch "Dir" ersetzt
    
    cout << ausgabe << endl << endl;
    
    //Position eines Teils des Strings im String bestimmen
    
    int position;                      
    string x;
    
    cout << "Buchstaben oder Wort des letzten Satzes eingeben: ";
    cin >> x;
    position = ausgabe.find(x);                               //x ist der Parameter, nachdem gesucht wird
    cout << endl << "Der gesuchte Teil des Strings befindet sich an der Position " << position << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
