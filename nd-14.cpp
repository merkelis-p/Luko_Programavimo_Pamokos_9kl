#include <iostream>
#include <iomanip>

using namespace std;
int main () {

    float S, a, b;

    cout << "Iveskite staciojo tikampio statiniu ilgius (a, b): ";
    cin >> a >> b;

    S = a*b/2.0;

    cout << fixed << setprecision(2);
    cout << "Staciojo trikampio plotas lygus: " << S << endl;

    return 0;
}