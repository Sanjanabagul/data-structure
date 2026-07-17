#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class linearSearch
{

private:
    int a[SIZE], n, key;

public:
    void getArray();
    void putArray();
    void search();
};

void linearSearch ::getArray()
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

void linearSearch ::putArray()
{
    cout << "array elements : ";
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

void linearSearch ::search()
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

    l.getArray();
    l.putArray();
    l.search();

    // system("clear");
    return 0;
}