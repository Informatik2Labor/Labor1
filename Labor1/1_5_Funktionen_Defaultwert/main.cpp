/*****************************************************************
 *   Name Modul/Datei: Aufgabe 5:Funktionen mit Defaultwert MAIN
 *
 *   Autoren: Marvin Wiegand (mawiit13@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
 
 *   Beschreibung: Berechnung eines Trapezes
 
 *   Datum Entwicklungsstart:
 *   Datum Entwicklungsende:
 *   Zeitaufwand:
 *   Modifikationen:
 *******************************************************************/
#include <iostream>
#include <cmath> //Für sin

using namespace std;

void trapezFlaeche (int control, int a, int b, int y)
{
    float flaeche{0.0}; //Initialisieren
    
    switch(control)
    {   case 1:
            flaeche = (0.5*(2*a)*a*sin(90)) ;
            break;
        case 2:
            flaeche = (0.5*(a+b)*b*sin(90));
            break;
        case 3:
            flaeche = (0.5*(a+b)*b*sin(y));
            break;
        default:
            std::out << "Falsche Angabe";
            break;
    }
    
    std::out << "Der Flaecheninhalt betraegt " << flaeche << std::endl;
}

int main ()
{
    int ctrl, a, b, y;
    
    std::out << "Was wollen sie berechnen?/n";
    std::out << "1 Quadrat/n";
    std::out << "2 Rechteck/n";
    std::out << "3 Parallelogram/n";
    
    std::in >> ctrl;
    
    
    //HIER FORTSETZEN
    switch(ctrl)
    {
        case 3:
            std::out << "Geben Sie den Wert fuer y ein" << std::endl;
            std::in >> y;
        case 2:
            std::out << "Geben Sie den Wert fuer b ein" << std::endl;
            std::in >> b;
        case 1:
            std::out << "Geben Sie den Wert fuer a ein" << std::endl;
            std::in >> a;
            break;
        default:
            std::out >> "Falsche Eingabe";
            return -1;
    }
    
    trapezFlaeche(ctrl, a, b, y);
    
    return 0;
}