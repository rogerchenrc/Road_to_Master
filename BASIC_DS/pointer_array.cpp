#include <iostream>
using namespace std;


int main(){

    int arr[] = {1, 3, 5, 7};
    int * p = arr; //Special thing in c++ between pointer and array (char[] will have same effect)
    int * q = &arr[0];
    cout << p[1] << endl; //Should be 3
    cout << q[1] << endl; //Should be 3 as well



    return 0;
}