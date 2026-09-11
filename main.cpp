#include <iostream> //to import the library input/output 
#include <string> 
using namespace std; //if we already use it we dont have to cll the std again like std::cout 


int main() { //using int and main 

    //11 september 2026 jumat 

    //buatlah sebuah program menghutung luas lingkaran 
    //with pi using const 
    // dan nilai r inputed by the user 

    double const pi = 3.14;
    int r = 0; 

    cout << "masukkan r kamu: "; 
    cin >> r; 
    double luas_lingkaran = pi * (r * r);
    cout << "hasil luas lingkaran kamu: " << luas_lingkaran;

    return 0; //to tell the program that its done executing 
}