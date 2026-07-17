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
                cout << "Enter the elements  : [ " << i << " ] [ " << j << " ][" << k << " ] : ";
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

            cout << "\n\t\t  Row " << j << " : ";
            for (int k = 0; k < C; k++)
            {
                cout << A[i][j][k] << " ";
            }
        }
    }
}

int main()
{

    int choice;
    char ch;
    array obj;
    do
    {
        system("clear");

        cout << "\n\t ------------------------------ ";
        cout << "\n\t\t  MENU   ";
        cout << "\n\t ------------------------------ ";

        cout << "\n\t1. Read Array ";
        cout << "\n\t2. Display Array";
        cout << "\n\t3. Exit";
        cout << "\n\t ------------------------------ ";

        cout << "\n\t Enter your choice(1-3) : ";
        cin >> choice;
        cout << "\n\t ------------------------------ ";

        switch (choice)
        {
        case 1:
            obj.get();
            obj.get_array();
            break;

        case 2:
            obj.put_array();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid choice";
            break;
        }

        cout << "\n\t Do you want to continue(y/n) : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}