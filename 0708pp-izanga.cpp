#include <iostream> // cin, cout, endl
#include <cmath> // pow(x, y) -> x^y , sqrt(n) -> √n

using namespace std; // be sio reiktu kviesti iostream funkcijas: std::cout, std::cin, std::endl

// N.d. Ivesties duomenys  a = 1,  b = -4,  c = 4  Rezultatas: Kvadratine lygtis turi viena sprendini x = 2

// x^2 - 4x + 4 = 0
// D = b^2 - 4ac = (-4)^2 - 4 * 1 * 4 = 16 - 16 = 0; D = 0, tai turesime viena sprendini
// x1 = (-b + sqrt(D)) / (2a) = (4 + 0) / 2 = 4 / 2 = 2

// Ivesties duomenys  a = 0,  b = -4,  c = 4  Rezultatas: Tai nera kvadratine lygtis

// 0*x^2 - 4x + 4 = 0
// -4x + 4 = 0

int main() {

    int a, b, c; // int a; int b; int c; // taip apsigyvena (inicializuojami/deklaruojami kintamieji)
    cout << "Iveskite kvadratines lygties, kintamaji a = ";
    cin >> a;
    cout << "Iveskite kvadratines lygties, kintamaji b = ";
    cin >> b;
    cout << "Iveskite kvadratines lygties, kintamaji c = ";
    cin >> c;

    cout << "Ivesti i programa buvo a = " << a << ", b = " << b << ", c = " << c << endl;

    if (a == 0) {
        cout << "Tai nera kvadratine lygtis" << endl;
        return 0; // baigiame programa
    }

    int D; 
    D = pow(b, 2) - 4 * a * c;
    cout << "Apskaiciuotas Diskriminantas yra D = " << D << endl;

    double x1, x2;

    if (D < 0) {
        cout << "Nera sprendiniu" << endl;
    } else if (D > 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "Kvadratines lygties du sprendiniai: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else { // else if (D == 0) {
        x1 = (-b) / (2 * a);
        cout << "Kvadratine lygtis turi viena sprendini x = " << x1 << endl;
    }

    return 0;
}