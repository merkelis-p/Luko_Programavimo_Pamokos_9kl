//  Duota: trapecijos pagrindai ir aukstine. Parasykite programa, kuri is eiles paklaustu kiekvieno duoto dydzio ir
// apskaiciavus trapecijos plota tvarkingai pateiktu atsakyma. Rezultata atspausdinkite vienetu tikslumu.

// a) 14; 20; 9 -> m = (a+b)/2.0; S = mh; m = (14+20)/2 = 17; S = 17 * 9 = 153
// b) 2,11; 0,11; 4,11 
// c) 100; 101; 201
// d) 7; 21,5; 3,11 
// e) 6,03; 0,15; 1 
// f) 1,1; 2,02; 3,003

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float S, m, a, b, h;
    cout << "Iveskite trapecijos pagrindo ilgi (a): ";
    cin >> a;
    cout << "Iveskite trapecijos pagrindo ilgi (b): ";
    cin >> b;
    cout << "Iveskite trapecijos aukstines ilgi (h): ";
    cin >> h;

    m = (a+b)/2.0;
    S = m*h;

    cout << "Trapecijos plotas lygus: " << fixed << setprecision(0) << S << endl; 

    return 0;

}
    










