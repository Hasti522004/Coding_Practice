#include <bits/stdc++.h>
using namespace std;
int main()
{
    // given sorted array
    int n, m, key;
    cin >> n >> m >> key;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // i have 2 posibities to start
    /*
    1 4 7 11
    2 5 8 12
    3 6 9 16
    10 13 14 17

    either i start with 11 or 10.
    because in this case one side is less number and other side is more number
    */
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << i << " " << j;
            break;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}