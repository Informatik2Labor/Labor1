/*****************************************************************
 *   Name Modul/Datei: Aufgabe 4: Ein- und Ausgabe und Aufzählungstypen MAIN
 *
 *   Autoren: Roland Fronczek (rofrit01@hs-esslingen.de), Marvin Wiegand (mawiit13@hs-esslingen.de)
 
 *   Beschreibung: Entwicklung eines Tsching Tschang Tschon Spiels
 
 *   Datum Entwicklungsstart:10.4.2014
 *   Datum Entwicklungsende: 11.4.2014
 *   Zeitaufwand: 2 h
 *   Modifikationen:
 *******************************************************************/

/*
 Spiel Tsching, Tschang, Tschong
 Regeln:
 Es gibt zwei Spieler: der Programmierer und der Computer.
 Beide Spieler waehlen gleichzeitig eines der drei Objekte
 Stein, Schere und Papier. Beide können das gleiche Objekt wählen.
 Der Spieler, der das mächtigere Objekt gewählt hat gewinnt.
 SCHERE kann einen STEIN nicht zerschneiden, d.h. STEIN ist
 mächtiger als SCHERE. PAPIER wickelt STEIN ein, d.h. PAPIER ist
 mächtiger als STEIN. SCHERE zerschneidet PAPIER, d. h. SCHERE
 ist maechtiger als PAPIER
 */
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

using namespace std;


// Aufzählungstyp für Stein etc.
enum objectType { STEIN, SCHERE, PAPIER };


// Struktur für einen Spieler bestehend aus Name und Wahl
// des Spielers
struct player {
    char * name;
    objectType choice;
};


// Variable für den Namen des Spielers
char name[15];

// Name des Spielers eingeben
char * enterName(char str[])
{
    cout << "Name des Spielers:\n";
    cin >> str;
    
    return str;
}

// Den Computer zufällig waehlen lassen.
// Nutzen Sie srand(...) und rand().
objectType randomChoice()
{
    objectType auswahl;
    
    srand(time(0));
    
    switch(rand() % 3)
    {
        case 1 : auswahl = STEIN; break;
        case 2 : auswahl = SCHERE; break;
        case 3 : auswahl = PAPIER; break;
        default: cout << "Falsche Eingabe!"; break;
    }
    
    return auswahl;
}

// Die Wahl von STEIN etc. als String zurückgeben lassen
char * object2str(objectType o) {
    char * str;
    switch (o) {
        case SCHERE: str = "Schere"; break;
        case STEIN: str = "Stein"; break;
        case PAPIER: str = "Papier"; break;
        default: break;
    }
    return str;
}


// Einen Text mit dem Namen des Spielers und seiner Wahl ausgeben
void showPlayer(player p) {
    
    cout << p.name;
    cout << " hat das Objekt ";
    cout << object2str(p.choice);
    cout << " gewaehlt.\n";
}

// Die Wahl des Spielers abfragen
objectType enterChoice(){
    int abfrage;
    objectType auswahl;
    cout << "Bitte Objektwahl eingeben (1 = Stein, 2 = Schere, 3 = Papier):\n";
    cin >> abfrage;
    
    switch(abfrage)
    {
        case(1): auswahl = STEIN; break;
        case(2): auswahl = SCHERE; break;
        case(3): auswahl = PAPIER; break;
        default: cout << "Falsche Eingabe!";
    }
    
    return auswahl;
}

// Die Wahl bestimmen, die gewonnen hat
objectType winningObject(objectType obj1, objectType obj2)
{
    objectType winner;
    switch (obj1) {
        case STEIN:
            switch (obj2) {
                case SCHERE: winner = STEIN; break;
                case PAPIER: winner = PAPIER;break;
            }break;
            
        case SCHERE:
            switch (obj2) {
                case STEIN: winner = STEIN; break;
                case PAPIER: winner = SCHERE; break;
            }break;
            
        case PAPIER:
            switch (obj2) {
                case STEIN: winner = PAPIER; break;
                case SCHERE: winner = SCHERE; break;
            } break;
    }
    
    return winner;
    
}

// Ausgeben, wer gewonnen hat
void showWinner(player p1, player p2) {
    
    objectType gewinner = winningObject(p1.choice, p2.choice);
    if (p1.choice == gewinner) {
        cout << p1.name << " hat gewonnen!\n";
    } else if (p2.choice == gewinner) {
        cout << p2.name << " hat gewonnen!\n";
    } else {
        cout << "Unentschieden!\n";
    }}

int main() {
    player player1, player2;
    player1.name = "Computer";
    player1.choice = randomChoice();
    cout << "Der Computer hat sein Wahl getroffen." << endl;
    player2.name = enterName(name);
    player2.choice = enterChoice();
    showPlayer(player1);
    showPlayer(player2);
    showWinner(player1, player2);
}
