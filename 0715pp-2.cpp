// Duoti trys sveikieji skaiciai a, b, c. Parasykite programa, kuri rastu reiskinio
// a^2 + b^2 - c^2 reiksme ir raskite reiskinio reiksmes kai:
// a) a= 1, b= 2, c=3;      // 1*1 + 2*2 - 3*3 = 1 + 4 - 9 = 5 - 9 = 4 
//  e) a= 9, b= -8, c=-4;
// b) a= 4, b= 2, c=3; f) a= -4, b= 5, c=8;
// c) a= 5, b= 6, c=-7; g) a= -7, b= -1, c=-5;
// d) a=-2, b= 2, c=7; h) a=-8, b= -9, c=-10;

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ 
    int a, b, c, rezultatas;

    cout << "iveskite 3 skaicius: " << endl;

    cin >> a >> b >> c;

    rezultatas = pow(a, 2) + pow(b, 2) - pow(c, 2);

    cout << "Rezultatas yra: " << rezultatas << endl;

    return 0;
    
}