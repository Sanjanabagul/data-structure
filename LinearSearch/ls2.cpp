#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class linearSearch
{

private:
    int a[SIZE], n, key;

public:
    void get();
    void getKey();
    void getArray();
    void putArray();
    void search();
};

void linearSearch ::getArray()
{



    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

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

void linearSearch ::get()
{

    cout << "Enter the value of n : ";
    cin >> n;
}

void linearSearch ::getKey()
{
    cout << "Enter value of key : ";
    cin >> key;
}

int main()
{

    linearSearch l;

    l.get();
    l.getArray();
    l.getKey();
    l.putArray();
    l.search();

    // system("clear");
    return 0;
}