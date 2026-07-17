#include <iostream>
#include <stdlib.h>

#define Plane 10
#define ROW 10
#define COL 10
using namespace std;

class array
{
private:
    int A[Plane][ROW][COL], p, R, C;

public:
    int get();
    void get_array(int p,int R,int C);
    void put_array(int p,int R,int C);
};

int array ::get()
{

    int x;
    cin>>x;
    return x;

}

void array ::get_array(int p,int R,int C)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < R; j++)
        {
            for (int k = 0; k < C; k++)
            {
                cout << "Enter the elements  : [ " << i << " ] [ " << j << " ]  ";
                cin >> A[i][j][k];
            }
        }
    }
}

void array ::put_array(int p,int R,int C)
{
    cout << "\n\tMatrix : ";
    for (int i = 0; i < p; i++)
    {
        cout << "\n\t  Plane " << i << " : ";

        for (int j = 0; j < R; j++)
        {

            cout << "\n\t  Row " << j << " : ";
            for (int k = 0; k < C; k++)
            {
                cout << A[i][j][k] << " ";
            }
        }
    }
}

int main()
{

    int A[Plane][ROW][COL], p, R, C;
    system("clear");

    array obj;
    cout<<"Enter no of planes: ";
    p = obj.get();

    cout<<"Enter no of rows: ";
    R = obj.get();

    cout<<"Enter no of col: ";
    C = obj.get();

    obj.get_array(p,R,C);
    obj.put_array(p,R,C);

    return 0;
}