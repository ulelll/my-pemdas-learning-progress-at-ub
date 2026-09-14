#include <iostream> 
#include <string> 
using namespace std; 

int main () { 
    //11 september 2026 jumat 

    /**
    buatlah sebuah program menghutung luas lingkaran 
    with pi using const 
    dan nilai r inputed by the user 
    **/

    double const pi = 3.14;
    int r = 0; 

    cout << "masukkan r kamu: "; 
    cin >> r; 
    double luas_lingkaran = pi * (r * r);
    cout << "hasil luas lingkaran kamu: " << luas_lingkaran;

    // operators 

    int a, b; 
    
    cout << "masukkan nilai a kamu: " ; 
    cin >> a; 
    cout << "masukkan nilai b kamu: " ; 
    cin >> b; 

    cout << "nilai a kamu: " << a << "\nnilai b kamu: " << b; 
    
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << (!a) << endl;
    cout << "!b = " << (!b) << endl;

    cout << "!=( a > b) && ( a < b ) =" << !(a > b)&&( a < b );

    return 0; 

}