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
    void get();
    void get_array();
    void put_array();
};

void array ::get()
{

    cout << "Enter no of planes, Rows and cols: ";
    cin >> p >> R >> C;
}

void array ::get_array()
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

void array ::put_array()
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
    obj.get();
    obj.get_array();
    obj.put_array();

    return 0;
}