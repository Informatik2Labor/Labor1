/*****************************************************************
 *   Name Modul/Datei: Aufgabe 2: Daten einlesen und ausgeben MAIN
 *
 *   Autoren: Marvin Wiegand (mawiit13@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
 *
 *   Beschreibung: Einlesen von gewünschter Anzahl an Zahlen in ein Array. Ausgabe aller Zahlen und des Durchschnitts des kompletten Arrays
 *
 *   Datum Entwicklungsstart: 31.03.2014
 *   Datum Entwicklungsende:
 *   Zeitaufwand:
 *   Modifikationen:
 *******************************************************************/

#include <iostream>

using namespace std;

int main (void)
{
    int anzahl, zaehler, durchschnitt;
    zaehler = 0;
    
    
    cout << "Bitte geben Sie die Anzahl der gewünschten einzugebenden Ganzzahlen ein";
    cout << endl;
    
    cin >> anzahl;
    
    int aZahlen[anzahl];
    
    cout << "Bitte geben Sie ihre ganzzahligen Werte ein:";
    
    //for each Schleife zur eingabe der Zahlen
    for (int werte : aZahlen)
    {
        cin >> werte;
        zaehler = zaehler + werte;
    }
    
    //for each Schleife zur ausgabe der Array Elemente NOT READY
    for (int wert : aZahlen)
    {
        cout << wert << endl;
    }
    
    durchschnitt = zaehler/anzahl;
    
    cout << "Durchschnitt des Arrays:" << durchschnitt;
    
    return 0;
}