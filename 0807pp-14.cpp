// Raskite staciojo trikampio plota, kai zinomi jo statiniy ilgiai (realieji skaiciai). Rezultata atspausdinkite 0,01
// tikslumu.
// a) 14 ir 20  .. 

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float a, b, S;

    cout << "Iveskite 2 skaicius: ";
    cin >> a >> b; 

    S = 1.0 * a * b / 2.0;

    cout << "Plotas: " << fixed << setprecision(2) << S << endl;

    return 0;

}