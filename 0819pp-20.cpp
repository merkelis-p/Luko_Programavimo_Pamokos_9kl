// Jonukas turejo m euru. Uz saldainius sumokejo s euru. Kuria dali (procentais) pinigu berniukas isleido? Rezultata atspausdinkite 0.01 tiklsumu.

// a) m = 13.5; s = 2.05
// ...

// 13.5 euru - tai 100%
// 2.05 euru - tai x%


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float m, s, ats;
    cout << "Iveskite du skaicius (1. m - pinigu kiekis, 2. s - saldainio kaina): " << endl;
    cin >> m >> s;
    ats = s*100/m;

    cout << fixed << setprecision(2);
    cout << "Pinigu dalis procentais lygi: " << ats << endl;
    
    return 0;
}