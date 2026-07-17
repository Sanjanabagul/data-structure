#include <iostream>
#include <stdlib.h>

#define Plane 10
#define ROW 10
#define COL 10
using namespace std;

int main()
{

    int A[Plane][ROW][COL], p, R, C;
    system("clear");

    cout << "Enter no of planes, Rows and cols: ";
    cin >> p >> R >> C;

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

    return 0;
}