// 8. Duoti keturi realieji skaiciai. Paeiliui jie visi dalinami is 17. Raskite gautu rezultatu suma desimtuju tikslumu.

// a) 7; 2,5; 3,1; 8,1 
// b) 6,3; 3,15; 1; 2,1 
// c) 100; 11; 2,01; 1
// d) 2,1; 0; 3,1; 4,5 
// e) 11; 12; 13; 14,4
// f) 1,1; 2,02; 3,1; 1

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float a, b, c, d, r1, r2, r3, r4, sum;
    cout << "Iveskite 4 skaicius: " << endl;
    cin >> a >> b >> c >> d;
    
    r1 = a/17;
    r2 = b/17;
    r3 = c/17;
    r4 = d/17;
    sum = r1+r2+r3+r4;
    
    cout << fixed << setprecision(1);
    cout << "Suma lygi: " << sum << endl;

    return 0;
}
