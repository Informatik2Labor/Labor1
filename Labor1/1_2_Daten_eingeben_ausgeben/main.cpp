/*****************************************************************
 *   Name Modul/Datei: Aufgabe 2: Daten einlesen und ausgeben MAIN
 *
 *   Autoren: Roland Fronczek (rofrit01@hs-esslingen.de), Marvin Wiegand (mawiit13@hs-esslingen.de)
 *
 *   Beschreibung: Einlesen von gewünschter Anzahl an Zahlen in ein Array. Ausgabe aller Zahlen und des Durchschnitts des kompletten Arrays
 *
 *   Datum Entwicklungsstart: 31.03.2014
 *   Datum Entwicklungsende: 11.4.2014
 *   Zeitaufwand: 0,5 h
 *   Modifikationen: Änderung des Arrays in dyn. Array
 *******************************************************************/

#include <iostream>

using namespace std;

int main (void)
{
    int anzahl, zaehler, durchschnitt, wert;
    zaehler = 0;
    
    
    cout << "Bitte geben Sie die Anzahl der gewünschten einzugebenden Ganzzahlen ein";
    cout << endl;
    
    cin >> anzahl;
    
    //int aZahlen[anzahl];
    
    int *aZahlen = new int[anzahl];
    
    cout << "Bitte geben Sie ihre ganzzahligen Werte ein:";
    
    //for Schleife zur eingabe der Zahlen
    for (int i=0; i<=anzahl-1; i++) {
        cin >> wert;
        aZahlen[i] = wert;
        zaehler = zaehler + aZahlen[i];
    }
    
    //for each Schleife zur ausgabe der Array Elemente NOT READY
    for (int i=0; i<=anzahl-1; i++) {
        cout << aZahlen[i] << endl;
    }
    
    durchschnitt = zaehler/anzahl;
    
    cout << "Durchschnitt des Arrays:" << durchschnitt;
    
    delete[] aZahlen;
    
    return 0;
}