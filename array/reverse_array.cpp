#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    const int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size : " << size << endl;
    int rarr[size];

    for (int i = 0; i < size; i++)
    {
        rarr[i] = arr[size - i - 1];
    }

    printarray(rarr, size);
    return 0;
}