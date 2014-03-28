/*****************************************************************
 *   Name Modul/Datei: Aufgabe 2:Pacman Spiel MAIN
 *
 *   Autoren: Marvin Wiegand (mawiit13@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
 
 *   Beschreibung: Variable k wird in verschiedenen formatierungen (oc, hex,...) angezeigt)
 
 *   Datum Entwicklungsstart:
 *   Datum Entwicklungsende:
 *   Zeitaufwand:
 *   Modifikationen:
 *******************************************************************/


#include <iostream>
#include <conio.h> // für _getch()
// Achtung: _getch() ist nicht im Standard und daher abhängig vom Compiler
using namespace std;

// Gr ̈oße des Labyrinths
const int kZeilen = 11;
const int kSpalten = 11;
// Zeichen, die im Labyrinth vorkommen k ̈onnen,
// NL = new line, EOS = end of string
enum Symbole { MAUER = ’#’, WEG = ’ ’, MUENZE = ’:’, NL = ’\n’,
    EOS = ’\0’, ICH = ’X’, GEIST = ’G’ };
// Das Labyrinth als char-Array
// Die vorletzte Spalte speichert ein Zeilenendezeichen \n
// und die letzte ein \0-Zeichen, damit die Ausgabe leichter wird.
char labyrinth[kZeilen][kSpalten + 2];

// Labyrinth mit # f ̈ullen
void initialisieren() {
    /* HIER */ }

// Labyrinth auf dem Bildschirm ausgeben
void drucken() {
    // Console frei machen
    system(” c l s ”);
    // Labyrinth ausgeben
    /* HIER */
}
// Hilfsfunktion max
int max(int x, int y) {
    return (x <= y) ? y : x; }

// Hilfsfunktion min
int min(int x, int y) {
    return (x <= y) ? x : y; }

// Durch Herumlaufen werden Wege im Labyrinth erzeugt
// ASCII-Wert der Tasten: oben 72, links 75, rechts 77, unten 80
void erzeugen() {
    char c = ’x’;
    int posx = kSpalten / 2;
    int posy = kZeilen / 2;
    labyrinth[posy][posx] = ICH;
    drucken();
    while (c != ’q’) {
        drucken();
        cout << ”Laufen mit Pfeiltasten . Beenden mit q.” << endl;
        labyrinth[posy][posx] = WEG;
        c = _getch();
        switch (int(c)) {
                // oben
            case 72: posy = max(1, posy - 1); break;
                // links
            case 75: posx = max(1, posx - 1); break;
                // rechts
            case 77: posx = min(kSpalten - 2, posx + 1); break;
                // unten
            case 80: posy = min(kZeilen - 2, posy + 1); break;
                // q = quit
            case 113: break;
        }
        labyrinth[posy][posx] = ICH;
    }
}
int main() {
    initialisieren();
    drucken();
    erzeugen();
}
