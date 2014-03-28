/*****************************************************************
*   Name Modul/Datei: Aufgabe 1:Ausgaben formatieren MAIN
*
*   Autoren: Marvin Wiegand (mawiit13@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
 
*   Beschreibung: Variable k wird in verschiedenen formatierungen (oc, hex,...) angezeigt)
 
*   Datum Entwicklungsstart:
*   Datum Entwicklungsende:
*   Zeitaufwand:
*   Modifikationen:
*******************************************************************/

//string( k % 5 + 1 , '∗' )

#include <string> 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double d = 1.234;
    cout << "Nr\tOct\tHex\tString\tFixed\t\tScientific" << endl;
    for (int k = 1; k < 11; k++)
    {
        cout << setiosflags (ios::showbase | ios::right) << setprecision(3) << setfill(' ');
        cout << dec << k << "\t";
        cout << oct << k << "\t";
        cout << hex << k << "\t";
        //cout << string( k % 5 + 1 , '∗' ) << "\t";
        cout << "\t\t";                     //String-Spalte überspringen
        cout << showpos << setw(8) << fixed << d << noshowpos << "\t";;
        cout << setw(10) << scientific << d;
        d = d*-2;
        cout << endl;
    }
    
    return 0;
}