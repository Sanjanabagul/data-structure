#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

template <class T>

class linearSearch
{

private:
    T a[SIZE];

public:
    int get();
    T getKey();
    void getArray(int n);
    void putArray(int n);
    void search(int n, T key);
};

template <class T>
int linearSearch<T>::get()
{
    int p;
    cin >> p;
    return p;
}

template <class T>
T linearSearch<T>::getKey()
{
    T p;
    cin >> p;
    return p;
}

template <class T>
void linearSearch<T>::getArray(int n)
{
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
}

template <class T>
void linearSearch<T>::putArray(int n)
{
    cout << "array elements : ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

template <class T>
void linearSearch<T>::search(int n, T key)
{
    int x = 0;
    int pos[SIZE];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos[x] = i;
            x++;
        }
    }

    if (x == 0)
    {
        cout << "\n\tElement is not found ";
    }
    else
    {
        cout << "\n\t " << key << " is find in the list " << x << " Times at index ";
        for (int i = 0; i < x; i++)
        {
            if (i == x - 1)
            {
                cout << pos[i];
            }
            else
            {
                cout << pos[i] << ",";
            }
        }
    }
}

int main()
{
    linearSearch<char> l;
    cout << "Enter the value of n :";
    int n = l.get();
    l.getArray(n);

    cout << "Enter the key : ";
    char key = l.getKey();

    l.putArray(n);

    l.search(n, key);

    return 0;
}