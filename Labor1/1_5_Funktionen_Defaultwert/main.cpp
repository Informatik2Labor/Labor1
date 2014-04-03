/*****************************************************************
 *   Name Modul/Datei: Aufgabe 5:Funktionen mit Defaultwert MAIN
 *
 *   Autoren: Marvin Wiegand (mawiit13@hs-esslingen.de), Roland Fronczek (rofrit01@hs-esslingen.de)
<<<<<<< HEAD
 
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
    
=======

 *   Beschreibung:  leitet über Default-Werte zu verschiedenen Funktionen

 *   Datum Entwicklungsstart:   140403-13:10
 *   Datum Entwicklungsende:    140403-13:40
 *   Zeitaufwand:               30 min
 *   Modifikationen:            Anzeige welcher if-Strang verwendet wurde,
                                Default-Wert gamma=90°
 *******************************************************************/

#include <cmath>
#include <iostream>

using namespace std;

double x;
double y;
double z;
double ga;


double trapezFlaeche(double a, double b=-1.0, double g=90.0, double c=-1.0) {
    double erg,h;
    g*=M_PI/180;
    if (c==-1.0){
        cout << "kein c";
        if (b==-1.0) {
            erg=a*a*sin(g);
            cout << ", kein b" << endl;
            return erg;
            }
        else {
        erg=a*b*sin(g);
        cout << endl;
        return erg;
        }
    }

    else {
    h=b*sin(g);
    erg=(a+c)*h/2;
    cout << "a,b,c vorhanden" << endl;
    return erg;
    }
};

int main()
{
    cout << "a) a=2.0, c=3.5, b=4.0, gamma=45.0:" <<endl;
    cout << trapezFlaeche(x=2.0, y=4.0, ga=45.0, z=3.5) << endl;
    cout << "b) a=3.0, b=4.0, gamma=45.0:" <<endl;
    cout << trapezFlaeche(x=3.0, y=4.0, ga=45.0) << endl;
    cout << "b) a=4.0, b=5.0:" <<endl;
    cout << trapezFlaeche(x=4.0, y=5.0) << endl;
    cout << "b) a=2.0:" <<endl;
    cout << trapezFlaeche(x=2.0) << endl;
>>>>>>> 0fe5447757e19a04a3257fed5b46013df3e2e254
    return 0;
}