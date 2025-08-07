// Duota lygiasonio trikampio sonine krastine a ir pagrindas b (sveikeji skaiciai). Parasykite programa, kuri rastu sio trikampio perimetra.
// a) a = 45; b = 21
// b) a = 5; b = 9 
// c) a = 427; b = 24

#include <iostream>

using namespace std;

int main () {

    int a, b, P;

    cout << "Iveskite du skaicius: " << endl;

    cin >> a >> b;

    P = a+a+b; // 2*a + b

    cout << "P lygus: " << P << endl;

    return 0;

}