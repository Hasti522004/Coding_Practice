#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxLength = 1;
    int currentlength = 2;
    int diff = array[0] - array[1];
    for (int i = 0; i < n - 1; i++)
    {
        if ((array[i] - array[i + 1]) == diff)
        {
            currentlength++;
            if (currentlength > maxLength)
            {
                maxLength = currentlength;
            }
        }
        else
        {
            diff = array[i] - array[i + 1];
            currentlength = 2;
        }
    }

    cout << maxLength;
    return 0;
}
