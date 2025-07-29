// Mokykloje yra k kabinetu, kuriu kiekviename yra po m elektros lempu. Kiek vatvalandziu elektros energijos
// suvartoja mokykla per diena, dirbdama nuo 8 val. iki 16 val? Visu lempuciu galingumas po g W (vatu). 
// Ivykdykite programa ir uzraskite atsakymus, kai:
// a) 17 kab, 16 lemp., 75w;
// b) 23 kab, 16 lemp., 60w;
// c) 31 kab, 12 lemp., 75w; 
// d) 14 kab, 12 lemp., 100w; 
// e) 14 kab, 15 lemp., 75w;
// f) 19 kab, 19 lemp., 100w;
// g) 26 kab, 11 lemp., 120w;
// h) 26 kab, 14 lemp., 60w;

// 1 vatvalande 1W/h = 1Wh
// // a) 17 kab, 16 lemp., 75w; = 17kab. * 16lemp. * 75W * 8h = 17 * 16 * 75 * 8 = 163200 Wh 

#include <iostream>

using namespace std;

int main () {
   
    int kab, lemp, W, Wh;

    cout << "Iveskite tris skaicius (kabinetu skaiciu, lempuciu skaiciu kabinete, vienos lemputes galinguma): ";

    cin >> kab >> lemp >> W;

    int h = 8; // mokykla dirba nuo 8 val. iki 16 val., tai 8 valandos darbo

    Wh = kab*lemp*W*h;

    cout << "Mokykla suvartoja " << Wh << " Wh per diena." << endl;

    return 0;
    
} 