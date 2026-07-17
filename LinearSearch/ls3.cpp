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
    void search(int n, int key);
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

void linearSearch ::search(int n, int key)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            x = 1;
            break;
        }
    }

    if (x == 1)
    {
        cout << " \n Element is found";
    }
    else
    {
        cout << "\n element is not found";
    }
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

    l.search(n, key);
    return 0;
}