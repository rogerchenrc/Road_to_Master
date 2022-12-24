#include<iostream>
#include<vector>
using namespace std;


//Dynamically allocate matrix using "new"


void static_matrix(){
    //using calendar as an example
    const int N_DAYS = 7;
    const int N_HOURS = 24;
    int schedule[N_DAYS][N_HOURS]; //Matrix
}

/*-------Aiming to create an M[i][j] matrix-----*/
void dynamic_matrix(int m, int n, bool del){
    int ** M = new int*[n];  //matrix is type int ** (a pointer to a pointer of integers)
    for(int i = 0; i < n; i++){
        M[i] = new int[m]; //allocate the i-th row
    }
    //Deletion
    if(del == true){
        for(int i = 0; i < n; i++){
            delete[] M[i];
        }
        delete[] M;
    }


}

/*----Using STL VECTOR (do not need to write loop to delete the rows, as needed with dynamic array)--------*/
void stl_vector(int m, int n){
    vector<vector<int>> M(n,vector<int>(m));
}

int main(){
    dynamic_matrix(5, 5, true);
}