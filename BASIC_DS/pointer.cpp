#include<iostream>
#include<string>
using namespace std;
using std::string;


float x = 10.7f;

int main(){

    /*A reference is another name, or alias, for an object that already exists.*/
    /*It is a different concept to the & when it means address-of */
    float &rx = x; //local reference to x
    //double &ref = x; // Error! different type
    rx *= 2;
    cout << "x = " << x << endl;
    cout << "rx = "<< rx << endl;
    const float &cref = x; //Read only reference
    //++cref; // Error! read only reference
    cout << "cref = " << cref << endl;
    const string txt = "I am handsome.";
    // string &str = txt; // error! read only reference, need to change to below
    const string &str = txt;
    cout << "str = "<<str << endl;
    cout << "txt = "<< txt << endl;


    return 0;
}