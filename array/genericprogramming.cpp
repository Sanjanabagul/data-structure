#include <iostream>
#include <stdlib.h>
using namespace std;

#define SIZE 10

template<class T>

class array
{

private:
    string A[SIZE], n;

public:
    int get();
    void get_Array(int n);
    void put_Array(int n);
};

template<class T>
int array <T> ::get()
{
    int x;
    cin >> x;
    return x;
}

template<class T>
void array <T> ::get_Array(int n)
{

    cout << "\n\t Enter array elements for array : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Array elements [" << i << "] : ";
        cin >> A[i];
    }
}

template<class T>
void array <T> ::put_Array(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{

    int n;
    system("cls");
    array <int>obj;
    cout << "\n\t Enter the no. of elemts in the array : ";
    n = obj.get();
    obj.get_Array(n);
    cout << "\n\t Array elements are : ";
    obj.put_Array(n);

    array <float>obj1;
    cout << "\n\t Enter the no. of elemts in the array : ";
    n = obj1.get();
    obj1.get_Array(n);
    cout << "\n\t Array elements are : ";
    obj1.put_Array(n);

    array <char>obj2;
    cout << "\n\t Enter the no. of elemts in the array : ";
    n = obj2.get();
    obj2.get_Array(n);
    cout << "\n\t Array elements are : ";
    obj2.put_Array(n);

    array <string>obj3;
    cout << "\n\t Enter the no. of elemts in the array : ";
    n = obj3.get();
    obj3.get_Array(n);
    cout << "\n\t Array elements are : ";
    obj3.put_Array(n);

    return 0;
}