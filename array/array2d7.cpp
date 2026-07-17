#include<iostream>
#include<stdlib.h>
using namespace std;

#define ROW 10
#define COL 10

class array{

    private:
    string A[ROW][COL];

    public:

    int get();
    void get_array(int R,int C);
    void put_array(int R,int C);
};

int array :: get(){

    int x;
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

    int R,C;
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