// no 2

#include<iostream>

using namespace std; 

int main() { 
    
    int semester;  
    float ipk; 
    cout << "masukkan semestr kamu: " << endl;
    cin >> semester; 

    if (semester < 3 ){ 
        cout << "kamu belum bisa mengambil KRS, ";
    }
    else {
        cout << "masukkan IPK terakhir kamu: " << endl;
        cin >> ipk; 
        if ( ipk >= 3.00){ 
            cout << "kamu bisa mengambil 24 SKS semestter iini" << endl; 
        }
        else if ( ipk >= 2.5 && ipk < 3.00) { 
            cout << "kamu bisa mengambil 21 sks semester ini" << endl; 
        }
        else if ( ipk >= 2.00 || ipk < 2.50) {
            cout << "kamu bisa mengambil 21 sks semester ini" << endl; 
        }
        else if ( ipk < 2.30 ) {
            cout << "kamu bisa mengambil 15 sks semester ini" << endl; 
        }
        else { 
            cout << "nilai tidak valid!" << endl; 
        }
    }
    return 0; 
}


