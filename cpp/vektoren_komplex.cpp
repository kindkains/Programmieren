// vektoren.cpp - Programm zur Vektorrechnung

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

struct vektor
 {
       double x;
       double y;       
 };

// Die Funktionen
vektor v_einlesen()
 {
       vektor ergebnis;
       
       cout << endl;
       cout << "     x : ";
       cin >> ergebnis.x;
       cout << "     y : ";
       cin >> ergebnis.y;
       cout << endl;
       
       return ergebnis;
 }
 
vektor v_addieren(vektor v1, vektor v2)
 {
       vektor ergebnis;
       
       ergebnis.x = v1.x + v2.x;
       ergebnis.y = v1.y + v2.y;
       
       return ergebnis;
 }

vektor v_subtrahieren(vektor v1, vektor v2)
 {
       vektor ergebnis;
       
       ergebnis.x = v1.x - v2.x;
       ergebnis.y = v1.y - v2.y;
       
       return ergebnis;
 }

vektor v_skalarprodukt(vektor v, double n)
 {
       vektor ergebnis;
       
       ergebnis.x = n * v.x;
       ergebnis.y = n * v.y;
       
       return ergebnis;
 }
 
double v_vektorprodukt(vektor v1, vektor v2)
 {
       double ergebnis;
       
       ergebnis = (v1.x * v2.y) - (v1.y * v2.x);
       
       return fabs(ergebnis);
 }
 
double v_laenge(vektor v)
 {
       double ergebnis;
       
       ergebnis = sqrt(v.x*v.x + v.y*v.y);
       
       return ergebnis;
 } 

void v_ausgeben(vektor v)
 {
     cout << "(" << v.x << "," << v.y << ")";
 }

int main()
{
    // Festlegen der Variablen
    vektor vekt1;                              // Vektor mit dem gerechnet wird
    vektor vekt2;                              // Zweiter Vektor für Addition, Subtraktion und Vektorprodukt
    double faktor;                             // für Skalarprodukt
    vektor ergebnis;
    double betrag;
    
    // Vektoren initialisieren
    vekt1.x = 0;                               // Grundsätzlich sollte der User damit ginnen, daß er den Menüpunkt 1 zum Einlesen
    vekt1.y = 0;                               // der Vektordaten auswählt. Da wir uns aber nicht darauf verlasen können, weisen
                                               // wir dem Vektor vekt1 vorab selbst definierte Werte zu
    
    // Menü ausgeben
    int befehl = -1;
    
    while(befehl !=0)
     {
                 cout << endl;
                 cout << " Men\x81 " << endl;
                 cout << " Vektoren eingeben          <1>" << endl;
                 cout << " Vektoren addieren          <2>" << endl;
                 cout << " Vektoren subtrahieren      <3>" << endl;
                 cout << " Skalarprodukt              <4>" << endl;
                 cout << " Vektorprodukt              <5>" << endl;
                 cout << " L\x84nge berechnen            <6>" << endl;
                 cout << " Piepton ausgeben           <7>" << endl;
                 cout << " Programm beenden           <0>" << endl;
                 
                 cout << endl;
                 cout << " Ihre Eingabe: ";
                 cin >> befehl;
        
     
    // Befehl bearbeiten
    switch(befehl)
     {
                  case 0: cout << endl;
                          cout << "Programm beenden" << endl;
                  break;
                  
                  case 1: cout << endl;
                          cout << "Vektor eingeben" << endl;
                  
                  // 1. Vektor einlesen
                  vekt1 = v_einlesen();
                  break;
                  
                  case 2: cout << endl;
                          cout << "Vektoren addieren" << endl;
                          
                  // 2. Vektor einlesen
                  cout << "2. Vektor eingeben" << endl;
                  cout << "     x: ";
                  cin >> vekt2.x;
                  cout << "     y: ";
                  cin >> vekt2.y;
                  cout << endl;
                  
                  // Vektoren addieren
                  ergebnis = v_addieren(vekt1, vekt2);
                  
                  // Ergebnis ausgeben
                  v_ausgeben(vekt1);
                  cout << " + ";
                  v_ausgeben(vekt2);
                  cout << " = ";
                  v_ausgeben(ergebnis);
                  cout << endl;
                  break;
                  
                  case 3: cout << endl;
                          cout << "Vektoren subtrahieren" << endl;
                          
                  // 2. Vektor einlsen
                  cout << "2. Vektor eingeben" << endl;
                  cout << "     x: ";
                  cin >> vekt2.x;
                  cout << "     y: ";
                  cin >> vekt2.y;
                  cout << endl;
                  
                  // Vektoren subtrahieren
                  ergebnis = v_subtrahieren(vekt1, vekt2);
                  
                  // Ergebnis ausgeben
                  v_ausgeben(vekt1);
                  cout << " - ";
                  v_ausgeben(vekt2);
                  cout << " = ";
                  v_ausgeben(ergebnis);
                  cout << endl;
                  break;
                  
                  case 4: cout << endl;
                          cout << "Skalarprodukt" << endl;
                          
                  // Faktor einlesen
                  cout << "Faktor eingeben" << endl;
                  cout << "     n: ";
                  cin >> faktor;
                  cout << endl;
                  
                  // Multiplikation
                  ergebnis = v_skalarprodukt(vekt1, faktor);
                  
                  // Ergebnis ausgeben
                  v_ausgeben(vekt1);
                  cout << " * " << faktor;
                  cout << " = ";
                  v_ausgeben(ergebnis);
                  cout << endl;
                  break;
                  
                  case 5: cout << endl;
                          cout << "Vektorprodukt" << endl;
                          
                  // 2. Vektor einlesen
                  cout << "2. Vektor eingeben" << endl;
                  cout << "     x: ";
                  cin >> vekt2.x;
                  cout << "     y: ";
                  cin >> vekt2.y;
                  cout << endl;
                  
                  // Fläche berechnen
                  betrag = v_vektorprodukt(vekt1, vekt2);
                  
                  // Ergebnis ausgeben
                  cout << "Fl\x84che des Parallelogramms, das von ";
                  v_ausgeben(vekt1);
                  cout << " x ";
                  v_ausgeben(vekt2);
                  cout << " aufgespannt wird " << endl;
                  cout << "   " << betrag << " Einheiten" << endl;
                  break;
                  
                  case 6: cout << endl;
                          cout << "L\x84nge des Vektors ";
                  
                  // Länge berechnen
                  betrag = v_laenge(vekt2);
                  
                  // Ergebnis ausgeben
                  v_ausgeben(vekt1);
                  cout << endl;
                  cout << "   : " << betrag;
                  cout << " Einheiten" << endl;
                  break;
                  
                  case 7: cout << endl;
                          cout << "\a";
                          break;
                  
                  default: cout << endl;
                  cout << "Ung\x81ltige Eingabe" << endl;
                  break;
                  
                  // Ende von Switch
     }
     
     // Warten bis Anwender die Return-Taste drückt
     cout << endl << endl << "Bitte ENTER druecken!" << endl << endl;
     fflush(stdin);
     getchar();
     system("cls");
     }// Ende von While
    
    
    return EXIT_SUCCESS;
}
