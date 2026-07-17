#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class linearSearch
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

int linearSearch ::get()
{

    int p;
    cin >> p;
    return p;
}

int linearSearch ::getKey()
{
    int p;
    cin >> p;
    return p;
}
void linearSearch ::getArray(int n)
{

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
}

void linearSearch ::putArray(int n)
{
    cout << "array elements : ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

int linearSearch ::search(int n, int key)
{
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
            else if (time == n)
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

    linearSearch l;

    int n, key;
    cout << "Enter the value of n :";
    n = l.get();
    l.getArray(n);

    cout << "Enter the key : ";
    key = l.getKey();

    l.putArray(n);

    "\n";
    int x = l.search(n, key);
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