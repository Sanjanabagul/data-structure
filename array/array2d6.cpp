//float
#include<iostream>
#include<stdlib.h>
using namespace std;

#define ROW 10
#define COL 10

class array{

    private:
    float A[ROW][COL];

    public:

    float get();
    void get_array(int R,int C);
    void put_array(int R,int C);
};

float array :: get(){

    float x;
    cin>>x;
    return x;

    // cout<<"\n\tEnter the no of Rows and Cols : ";
    // cin>>R>>C;
}


void array ::get_array(int R,int C){

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout<<"Enter the elements  : [ "<< i <<" ] [ " << j << " ]  ";
            cin>>A[i][j];
        }
    }
}

void array ::put_array(int R,int C){
    cout<<"\n\tMatrix : ";
    for(int i = 0; i<R; i++){
        cout<<"\n\t";

        for(int j=0; j<C; j++){
            cout<<A[i][j]<<" ";
        }
    }
}


int main(){

    float R,C;
   // int A[ROW][COL],R,C;
    system("clear");

    array obj;
    cout<<"Enter no of rows: ";
    R = obj.get();

    cout<<"Enter no of col: ";
    C = obj.get();
    obj.get_array(R,C);
    obj.put_array(R,C);

    return 0;
}