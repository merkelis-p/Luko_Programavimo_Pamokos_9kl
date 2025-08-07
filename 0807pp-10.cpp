// Duotas sveikasis metu skaicius m. Parasykite programa, kuri duotus metus isreikstu menesiais.
// a) 45 b) 122 c) 567

#include <iostream>

using namespace std;

int main () {

    int m, men;

    cout << "Iveskite skaiciu: " << endl;
    cin >> m;

    men = m*12;

    cout << m << " metuose yra " << men << " menesiu" << endl;

    return 0;

}