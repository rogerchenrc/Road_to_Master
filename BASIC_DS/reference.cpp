#include<iostream>
#include<string>
using namespace std;
using std::string;


int main(){
    string author = "Kuan Hao Chen";
    string &penname = author;
    penname = "Humble King";

    cout << author << endl; //should be Humble king
    cout << penname <<endl; //Humble King



    return 0;
}