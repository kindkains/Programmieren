#include <cstdlib>
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    //Demo Programm zum Schreiben in Dateien
    
    ofstream dat_aus;
    string dateiname;
    
    cout << "Geben Sie den Namen der Datei ein: ";
    cin >> dateiname;
    cout << endl << endl;
    
    dat_aus.open(dateiname.c_str(), ios_base::out);
    
    if(!dat_aus)
    {
                cout << "Datei konnte nicht geoeffnet werden!";
                cout << endl << endl;
                return -1;
    }
    
    // Verschiedene Daten zum Testen in die Datei schreiben
    
    string text1 = "Dies ist ein Text";
    int var1 = 1000;
    string text2 ="Dies ist ein anderer Text";
    double var2 = 555.111;
    
    dat_aus << text1 << endl;
    dat_aus << var1 << endl;
    dat_aus << text2 << endl;
    dat_aus << var2 << endl << endl;
    
    dat_aus.close();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
