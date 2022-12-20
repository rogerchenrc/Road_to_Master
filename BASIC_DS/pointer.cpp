#include<iostream>
using namespace std;

int main(){
    int a; //variable
    a = 8;
    int * p; //pointer
    p = &a;
    cout << a << endl; //Value of a
    cout << p << endl; //Address of a
    cout << *p << endl; //Dereferencing


    return 0;
}