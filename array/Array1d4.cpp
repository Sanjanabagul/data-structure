#include <iostream>
#include <stdlib.h>
using namespace std;

#define SIZE 10
class array
{

private:
    int A[SIZE], n;

public:
    int get();
    void get_Array(int n);
    void put_Array(int n);
};

int array ::get()
{
    int x;
    cin >> x;
    return x;
}

void array ::get_Array(int n)
{

    cout << "\n\t Enter array elements for array : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Array elements [" << i << "] : ";
        cin >> A[i];
    }
}

void array ::put_Array(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{

    int n;
    array obj;
    system("cls");
    cout << "\n\t Enter the no. of elemts in the array : ";
    n = obj.get();
    obj.get_Array(n);
    cout << "\n\t Array elements are : ";
    obj.put_Array(n);

    return 0;
}