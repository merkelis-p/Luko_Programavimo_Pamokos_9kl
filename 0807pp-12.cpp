// Duoti 4 sveikieji skaiciai x, y, z, w. Parasykite programa, kuri apskaiciuotu reiskiniu 
// x / y + z % w - 34 
// ir 
// y % w - x / z + 34 
// reiksmes.

// a) x = 27; y = 3; z = 45; w = 13;
// b) X = 14; y = 5; z = 42; w = 7;
// c) x = 234; y = 45; z = 678; w = 17;

#include <iostream>

using namespace std;

int main () {

    int x, y, z, w, r1, r2;
    
    cout << "Iveskite 4 skaicius: " << endl;
    cin >> x >> y >> z >> w;

    r1 = x / y + z % w - 34;
    r2 =  y % w - x / z + 34;

    cout << "Pirmasis reiskinys lygus: " << r1 << endl;
    cout << "Antrasis reiskinys lygus: " << r2 << endl;

    return 0;

}