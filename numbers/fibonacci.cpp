#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int n1 = 0, n2 = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << n1 <<" ";
        int n = n1 + n2;
        n1 = n2;
        n2 = n;
    }
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}