#include <iostream>
#include <stdlib.h>
using namespace std;

#define ROW 10
#define COL 10
template <class T>
class array
{

private:
    T A[ROW][COL];

public:
    int get();
    void get_array(int R, int C);
    void put_array(int R, int C);
};

template <class T>
int array<T>::get()
{

    int x;
    cin >> x;
    return x;

    // cout<<"\n\tEnter the no of Rows and Cols : ";
    // cin>>R>>C;
}

template <class T>
void array<T>::get_array(int R, int C)
{

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "Enter the elements  : [ " << i << " ] [ " << j << " ]  ";
            cin >> A[i][j];
        }
    }
}
template <class T>
void array<T>::put_array(int R, int C)
{
    cout << "\n\tMatrix : ";
    for (int i = 0; i < R; i++)
    {
        cout << "\n\t";

        for (int j = 0; j < C; j++)
        {
            cout << A[i][j] << " ";
        }
    }
}

int main()
{

    int R, C;
    // int A[ROW][COL],R,C;
    system("clear");

    array<int> obj;
    cout << "Enter no of rows: ";
    R = obj.get();

    cout << "Enter no of col: ";
    C = obj.get();
    obj.get_array(R, C);
    obj.put_array(R, C);

    array<float> obj1;
    cout << "Enter no of rows: ";
    R = obj1.get();

    cout << "Enter no of col: ";
    C = obj1.get();
    obj1.get_array(R, C);
    obj1.put_array(R, C);

    array<string> obj2;
    cout << "Enter no of rows: ";
    R = obj2.get();

    cout << "Enter no of col: ";
    C = obj2.get();
    obj2.get_array(R, C);
    obj2.put_array(R, C);

    return 0;
}