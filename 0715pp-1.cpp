// Duotas sveikasis skaicius x. Parasykite programa, kuri apskaiciuoty y reiksme pagal formule
// y = 5*x^5 - 4*x^4 + 3*x^3 - 2*x^2 + x 

// a) x= 1; b) x=-1;  c) x=2;
// d) x=-2; e) x=3; f) x=-3;
//  g) x=4; h) x=-4;

#include <iostream>
#include <cmath> // pow(n, m) - n^m ; n - laipsnio pagrindas;  m - laipsnio rodikilis

using namespace std; // be sito reiktu kviesti iostream funkcijas: std::cout, std::cin, std::endl

int main () {

    int x, y; // inicializacija  (kintamuju sukurimas / deklaravimas)

    cout << "Iveskite x = ";
    cin >> x;

    y = 5 * pow(x, 5) - 4 * pow(x, 4) + 3 * pow(x, 3) - 2 * pow(x, 2) + x;

    cout << "y = " << y << endl;

    return 0; // baigiame programa - kitaip tariant graziname sistemai kad programa sekmingai baige darba
}
