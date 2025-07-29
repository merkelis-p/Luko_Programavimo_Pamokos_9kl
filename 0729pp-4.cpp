// Parasykite programa, kuri pirma duotaji skaiciu padvigubintu, o antraji - patrigubintu.
// a) 6 ir 19;  c) 125 ir 17; e) 65 ir-98; g) 0 ir 1;
// b) 5 ir 45;  d) -65 ir 98; f) 1 ir-1;   h) 38 ir-354.

// 6  padvigubinta (6*2) yra 12, o 19 patrigubinta (19*3) yra 57.
#include <iostream>

using namespace std;

int main() {
   int a, b, sand1, sand2;
   cout << "Iveskite du skacius: ";
   cin >> a >> b;
   sand1 = a*2;
   sand2 = b*3;
   cout << "Padvigubintas 1-asis skaicius: " << sand1 << endl;
   cout << "Patrigubintas 2-asis skaicius: " << sand2 << endl;

   return 0;

}
