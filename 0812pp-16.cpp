// Duoti trys realieji skaiciai, reiskiantys trikampio krastiniu ilgius a, b ir c. 
// Parasykite programa, kuri apskaiciuotu trikampio plota pagal Herono formule:  
// S = √(p(p-a)(p-b)(p-c))
// cia p = (1/2)*(a+b+c). Rezultata atspausdinkite 0,1 tikslumu.

// a) 14; 20; 9 
// b) 2,11; 3,11; 4,11
// c) 100; 101; 101
// d) 7; 8,5; 3,11  
// e) 6,03; 3,15; 5 
// f) 1,1; 2,02; 3,003

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    
    float a, b, c, S, p;
    cout << "Iveskite trys skaicius (trikampio krastiniu ilgius a, b, c): " << endl;
    cin >> a >> b >> c;

    p = 0.5*(a+b+c);
    S =  sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout << fixed << setprecision(1);
    cout << "Trikampio plotas lygus: " << S << endl;

    return 0;
}