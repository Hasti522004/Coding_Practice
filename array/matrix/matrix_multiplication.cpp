#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int n1, m1;
    cin >> n1 >> m1;
    int b[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n][m1];
    if (m == n1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix multiplication is not poible";
    }
    return 0;
}