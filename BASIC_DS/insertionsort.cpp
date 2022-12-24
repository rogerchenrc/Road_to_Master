#include<iostream>

using namespace std;

//Output --> array A with elements reaarranged in nondecreasing order
//Efficient for small data

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while((j >= 0) && (arr[j]>current)){
            arr[j+1] = arr[j];
            j--;
        };
        arr[j+1] = current;
    }

};

void printArray(int input[], int n){
    for(int i=0; i < n; i++){
        cout<<"Array element is: "<<input[i]<<endl;
    }
}

int main(){
    int beta[] = {2, 3,1, 7, 4};
    int n = 5;
    insertion_sort(beta, 5);
    printArray(beta, 5);

}
