#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class linearsearch
{

private:
    int A[SIZE], n, key;

public:
    int get();
    int getKey();
    void get_Array(int n, int key);
    void put_Array(int n);
    void search(int n, int key);
};

int linearsearch ::get()
{
    int x;
    cin >> x;
    return x;
}

int linearsearch ::getKey()
{
    int x;
    cin >> x;
    return x;
}

void linearsearch ::get_Array(int n, int key)
{
    cout << "\n\t Enter array elements for array : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Array elements [" << i << "] : ";
        cin >> A[i];
    }
}

void linearsearch ::put_Array(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void linearsearch ::search(int n, int key)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            x = 1;
            break;
        }
    }

    if (x == 1)
    {
        cout << " \n\t Element is found";
    }
    else
    {
        cout << "\n\t element is not found";
    }
}

int main()
{
    int choice;
    char ch;
    int n;
    int key;
    linearsearch obj;

    do
    {
        system("cls");

        cout << "\n\t ------------------------------ ";
        cout << "\n\t\t  MENU   ";
        cout << "\n\t ------------------------------ ";

        cout << "\n\t1. Read Array ";
        cout << "\n\t2. Display Array";
        cout << "\n\t3. Linear Search";
        cout << "\n\t4. Exit";
        cout << "\n\t ------------------------------ ";

        cout << "\n\t Enter your choice(1-4) : ";
        cin >> choice;
        cout << "\n\t ------------------------------ ";

        switch (choice)
        {
        case 1:
            cout << "\n\t Enter the value of n : ";
            n = obj.get();
            obj.get_Array(n, key);
            break;

        case 2:
            obj.put_Array(n);
            break;

        case 3:
            cout << "\n\t Enter the key to search : ";
            key = obj.getKey();
            obj.search(n, key);
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "\n\t Invalid Choice";
        }

        cout << "\n\t Do you want to continue(y/n) : ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}