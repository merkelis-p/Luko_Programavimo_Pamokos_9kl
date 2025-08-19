// Matematines sviruokles periodas t skaiciuojamas pagal formule t = 2π√(l/g)
// Cia g - laisvojo kritimo pagreitis 
// g=9,81 m/s^2. Parasykite programa, kuri rastu l ilgio syruokles perioda t simtuju tikslumu.

// a) l = 5 m
// b) l = 1,76 m
// c) l = 200 m
// d) l = 1,2 m
// e) l = 54,8 m
// f) l = 0,54 m


#include <iostream>
#include <iomanip>
#include <cmath>

#define _USE_MATH_DEFINES 

using namespace std;

int main () {

    float t, g, l;
    g = 9.81;
    cout << "Iveskite svyruokles ilgi (l): " << endl;
    cin >> l;

    t = 2.0*M_PI*sqrt(l/g);
    
    cout << fixed << setprecision(2);
    cout << "Svyruokles periodas (t) lygus: " << t << endl;
    
    return 0;
}