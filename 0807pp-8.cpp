// Parasykite programa, kuri duotaji skaiciu pakeltu kubu ir kvadratu.
// a) -3; b) 5; c) -7;

#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int a, kub, kvad;
    
    cout << "Iveskite viena skaiciu: " << endl;
    cin >> a;
    
    kub = pow(a, 3);
    kvad = pow(a, 2);
    
    cout << "Kubas lygus: " << kub << endl;
    cout << "Kvadratas lygus: " << kvad << endl;

    return 0;

}