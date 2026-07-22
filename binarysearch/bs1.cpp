#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class binarysearch
{

private:
    int a[SIZE], n, key;

public:
    void getArray();
    void putArray();
    void search();
};

void binarysearch ::getArray()
{

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "Enter key : ";
    cin >> key;
}

void binarysearch ::putArray()
{
    cout << "\n\tarray elements : ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

void binarysearch ::search()
{
    int x = -1;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            x = mid;
            break;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (x == -1)
    {
        cout << "\n\t key is not found ";
    }
    else
    {
        cout << "\n\t key is found ";
    }
}

int main()
{

    binarysearch obj;

    obj.getArray();
    obj.putArray();
    obj.search();

    return 0;
}