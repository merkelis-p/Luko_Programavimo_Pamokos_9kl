// Duoti 5 sveikieji skaiciai a, b, c, d, e. Parasykite programa, kuri rastu Siu skaiciu suma, sandauga ir kvadratu suma.
// Ivykdykite programa su siomis pradinemis reiksmemis:

// a) a= 1, b= 2, c=3, d=7, e=-5; // 1 + 2 + 3 + 7 + (-5) = 6 + 7 - 5 = 13 - 5 = 8; Rezultatas: suma = 8, sandauga = -210, kvadratu suma = 88
// b) a= 4, b= 2, c=3, d=6, e=-6;
// c) a= 5, b= 6, c=-7, d=2, e=-4;
// d)  a= -2, b= 2, c=7, d=7, e=-7;
// e) a= 9, b= -8, c=-4, d=2, e=-2;
// f)a= -4, b= 5, c=8, d=3, e=3;
// g) a= -7, b= -1, c=-5, d=4, e=-4;
// h) a= -8, b= -9, c=-10, d=5, e=-2;

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a, b, c, d, e;

    cout << "Iveskite 5 skaicius: ";
    cin >> a >> b >> c >> d >> e;

    cout << "  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << endl;

    int suma = a + b + c + d + e;
    int sandauga = a * b * c * d * e;
    int kvadratu_suma = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);

    cout << "Suma: " << suma << endl;
    cout << "Sandauga: " << sandauga << endl;
    cout << "Kvadratu suma: " << kvadratu_suma << endl;
 
    return 0;

}