#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#define SIZE 10
using namespace std;

class binarysearch
{

private:
    int a[SIZE];

public:
    int get();
    int getKey();
    void getArray(int n);
    void putArray(int n);
    int search(int n, int key);
};

int binarysearch ::get()
{

    int p;
    cin >> p;
    return p;
}

int binarysearch ::getKey()
{
    int p;
    cin >> p;
    return p;
}
void binarysearch ::getArray(int n)
{

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
}

void binarysearch ::putArray(int n)
{
    cout << "array elements : ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

int binarysearch ::search(int n, int key)
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

    int time = 0;
    for (int i = 0; i < n; i++)
    {
        time++;
        if (a[i] == key)
        {

            if (time == 1)
            {
                cout << "\n\tBest case time complexity";
                cout << "\n\tTime Complexity = O(" << time << ") ";
            }
            else if (time == log(n) / log(2))
            {
                cout << "\n\tWorst case Time Complexity = O(" << time << ") ";
            }
            else
            {
                cout << "\n\tAverage case Time Complexity = O(" << time << ") ";
            }

            cout << "\n\tWorst case Time Complexity = O(" << time + 1 << ") ";
            return i;
        }
    }

    cout << "\n\tTime Complexity = O(" << time << ") ";

    return -1;
}

int main()
{

    binarysearch obj;

    int n, key;
    cout << "Enter the value of n :";
    n = obj.get();
    obj.getArray(n);

    cout << "Enter the key : ";
    key = obj.getKey();

    obj.putArray(n);

    "\n";
    int x = obj.search(n, key);
    if (x == -1)
    {
        cout << "\nElement is not found";
    }
    else
    {
        cout << "\nelement is  found";
    }
    // cout<<x;

    return 0;
}