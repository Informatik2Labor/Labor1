/*****************************************************************
*   Name Modul/Datei: Aufgabe 1:Ausgaben formatieren MAIN
*
*   Autoren: Marvin Wiegand (...@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
 
*   Beschreibung: Variable k wird in verschiedenen formatierungen (oc, hex,...) angezeigt)
 
*   Datum Entwicklungsstart:
*   Datum Entwicklungsende:
*   Zeitaufwand:
*   Modifikationen:
*******************************************************************/


#include <string> 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double d = 1.234;
    cout << "Nr Oct Hex String Fixed Scientific << endl";
    for (int k = 1; k < 11; k++)
    {
        ￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼cout << dec << k;
        cout << oct << k;
        cout << hex << k << ” ”;
        cout <<  << string( k % 5 + 1 , ’∗’ ) << ” ”;
        cout << fixed << d;
        cout << scientific << d;
        d = d*-2;
        cout << endl;
    }
    
    return 0;
}