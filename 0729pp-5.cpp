// 5. Jonukas turi tik centus tokiu nominalu: 1, 2, 5. Parasykite programa, kuri ivedus saldainio kaina centais,
// suskaiciuotu, kiek ir kokiu monetu Jonukas turi sumoketi pirkdamas saldainiu uz:
// a) 11ct, b) 8ct, c) 65ct, d) 43ct, e) 182ct, f) 2ct,  g) 3ct,  h) 19ct.


// 11ct: 2*5 + 1*1 =  10ct + 1ct = 11ct , reikes 2 monetu po 5ct ir 1 moneta po 1ct.

#include <iostream>

using namespace std;

int main () {
    
    int saldainio_kaina;

    cout << "Iveskite saldainio kaina centais: ";
    cin >> saldainio_kaina;

    int monetos_5, monetos_2, monetos_1;

    monetos_5 = saldainio_kaina / 5;
    saldainio_kaina = saldainio_kaina % 5; //saldainio_kaina %= 5;

    monetos_2 = saldainio_kaina / 2;
    saldainio_kaina = saldainio_kaina % 2;

    monetos_1 = saldainio_kaina;

    cout << "Reikes: " << endl;
    cout << "Monetu po 5ct: " << monetos_5 << endl
    << "Monetu po 2ct: " << monetos_2 << endl
    << "Monetu po 1ct: " << monetos_1 << endl;

    
    return 0;
}