#include<iostream>
#include<stdlib.h>
using namespace std;

#define ROW 10
#define COL 10


int main(){

    int A[ROW][COL],R,C;
    system("clear");

    cout<<"\n\tEnter the no of Rows and Cols : ";
    cin>>R>>C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout<<"Enter the elements  : [ "<<i<<" ] [ " << j << " ]  ";
            cin>>A[i][j];
        }
    }

    cout<<"\n\tMatrix : ";
    for(int i = 0; i<R; i++){
        cout<<"\n\t";

        for(int j=0; j<C; j++){
            cout<<A[i][j]<<" ";
        }
    }

    return 0;
}