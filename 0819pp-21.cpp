// Raskite vidutini traukinio greiti kai atstuma a (km) jis nuvaziuoja per h (val). 
// Greiti parasykite km/h ir m/s. Rezultata atspausdinkite 0.01 tikslumu.

// a) 150 km ; 3 h
// ...

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float a, h, v_kmh, v_ms;
    cout << "Iveskite atstuma (km): " << endl;
    cin >> a;
    cout << "Iveskite laika (val): " << endl;
    cin >> h;
    
    v_kmh = a/h;
    v_ms = v_kmh / 3.6;

    cout << fixed << setprecision(2);
    cout << "Greitis km/h lygus: " << v_kmh << endl;
    cout << "Greitis m/s lygus: " << v_ms << endl;

    return 0;
}