#include<iostream>
#include<string>
using namespace std;
using std::string;

//Create an array 

void arr(){
    int f[5];
    int f[] = {1, 3, 4, 5, 6};
}

enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

struct Passenger{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;

};

int main(){
    Passenger Tom = {"Tom Cruise", LOW_FAT, true, "291243"};
    Tom.name = "Tom Hardy";

    Passenger *p;
    p = new Passenger;
    //C++ provides easier way to access member function ->
    p -> name = "Pochontas";
    p -> mealPref = NO_PREF;
    p -> isFreqFlyer = true;
    p -> freqFlyerNo = "22119";

    delete p; // Delete only exist when using "new" statmenet

    /*===========In case of buffer=============*/
    char *buffer = new char[500];
    buffer[3] = 'a';
    delete [] buffer; // operator delete[] is used in the case of array
}