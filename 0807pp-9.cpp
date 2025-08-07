// Medziagos rietimo ilgis x metru. Kiek sukneliu galima pasiuti is sios medziagos, jei vienai suknelei reikia y metru medziagos?

// a) x = 456; y = 3  // Ats.: 152
// b) x = 560; y = 13  // Ats.: 43
// c) x = 4000; y = 27 // Ats.: 148 

#include <iostream>

using namespace std;

int main () {

    int x, y, sukn_sk;

    cout << "Iveskite viena skaiciu (x): ";
    cin >> x;
    cout << "Iveskite viena skaiciu (y): ";
    cin >> y;

    sukn_sk = x/y;
    
    cout << "Sukneliu skaicius lygus: " << sukn_sk << endl;

    return 0;
}