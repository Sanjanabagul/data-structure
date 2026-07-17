#include <iostream>
#include <stdlib.h>
using namespace std;

#define SIZE 10
class array
{

private:
    int A[SIZE], n;

public:
    void get_Array();
    void put_Array();
};

void array ::get_Array()
{
    cout << "\n\t Enter no of elemnts or enter the value of n : ";
    cin >> n;

    cout << "\n\t Enter array elements for array : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Array elements [" << i << "] : ";
        cin >> A[i];
    }
}

void array ::put_Array()
{
    cout << "\n\t Array elements are : ";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{

    array obj;
    obj.get_Array();
    obj.put_Array();

    return 0;
}