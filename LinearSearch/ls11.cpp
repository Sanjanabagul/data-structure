#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class linearSearch
{

private:
    char a[SIZE];

public:
    int get();
    char getKey();
    void getArray(int n);
    void putArray(int n);
    void search(int n, char key);
};

int linearSearch ::get()
{
    int p;
    cin >> p;
    return p;
}

char linearSearch ::getKey()
{
    char p;
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

void linearSearch ::search(int n, char key)
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
    linearSearch l;

    int n;
    char key;
    cout << "Enter the value of n :";
    n = l.get();
    l.getArray(n);

    cout << "Enter the key : ";
    key = l.getKey();

    l.putArray(n);

    l.search(n, key);
    return 0;
}