// N.d. Duoti du sveikieji skaiciai. Parasykite programa, kuri rastu tu skaiciu skirtumo ir sumos sandauga.
// a) -3; 5   b) 5; -7   c) -7; -8

// a)  suma = -3 + 5 = 2; skirtumas = -3 - 5 = -8 ; sandauga = 2*(-8) = -16
// -3 - 5 * (-3) + 5 = 

#include <iostream>

using namespace std;

int main () {
   
    int a, b, skirt, sum, sand;

    cout << "Iveskite du skaicius: " << endl; 
    cin >> a >> b;

    skirt = a - b;
    sum = a + b;
    sand = skirt * sum;// (a - b) * (a + b);

    cout << "Skirtumas lygus: " << skirt <<endl;
    cout << "Suma lygi: " << sum << endl;
    cout << "Sandauga lygi: " << sand << endl;

    return 0;
    
} 