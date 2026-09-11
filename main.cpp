#include <iostream> //to import the library input/output 
#include <string> 
using namespace std; //if we already use it we dont have to cll the std again like std::cout 


int main() { //using int and main 
    // Write C++ code here
    cout <<"hi dunyo!" << endl; //cout cant be used if theres no iostream 
    cout << "senin 7/ sept / 2026\n"; 
    cout << "today's our first day of learning c++\ntoday we learnt variables, and the naming variables. ";//uses to show cahracters 

    // variable naming, c+= is case sensitive 
    //camelCase is the preferable naming in c+= 
    int a = 5; 
    char b = '1'; 
    string c = "never gonna give u up"; 

    //to convert a string to int use stoi 
    string numberText = "123";  //ga bisa pakai character huruf: cause an error 
    int number = stoi(numberText); 

    //string to double 
    string numberTextD = "34.56"; //ga bisa pakai character huruf 
    double number = stod(numberTextD); 
    //Note: When converting strings to numbers,
    //these functions read as many valid characters as 
    //possible from the start of the string. 
    //They only throw an error if the string begins with an invalid character:


    //conventional naming 

    cout <<"nilai a = " << a << endl; 
    a = a + 100; 
    cout <<"nilai a ditambah 100 = " << a << endl; 
    a = a + 20; 
    cout <<"nilai a ditambah 120 = " << a << endl; 
    cout << "so, nilai akhirnya= " << a << endl;
    

    return 0; //to tell the program that its done executing 
}