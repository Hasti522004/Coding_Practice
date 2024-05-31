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
    int count = 0;
    int m = INT_MIN;
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((array[i] > m) && (array[i] > array[i + 1]))
            {
                count++;
            }
            m = max(m,array[i]);
        }
        cout << count;
    }

    return 0;
}
