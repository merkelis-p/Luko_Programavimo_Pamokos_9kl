//  Duoti trys realieji skaiciai. Raskite ju aritmetinio vidurkio ir sumos skirtuma. Rezultata atspausdinkite 0,001 tikslumu

// a) 14; 20; 9  = (14+20+9)/3-(14+20+9) = -28.667
// b) 2,11; 0,11; 4,11 
// c) 100; 101; 201
// d) 7; 21,5; 3,11 
// e) 6,03; 3,15; 1 
// f) 1,1; 2,02; 3,003

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float  sum, skirt, vid, a, b, c;
    cout << "Iveskite trys skaicius: " <<endl;
    cin >> a >> b >> c;
    
    sum = a+b+c;
    vid = sum/3; // (a+b+c)/3
    skirt = vid-sum;
    
    cout << fixed << setprecision(3);
    cout << "skirtumas lygus: " << skirt << endl;


    return 0;
}


