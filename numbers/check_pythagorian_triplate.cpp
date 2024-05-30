#include <bits/stdc++.h>
using namespace std;
int max(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
bool check(int a, int b, int c)
{
    int x, y, z;
    x = max(a, b, c);
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if ((x * x) == ((y * y) + (z * z)))
    {
        return true;
    }
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "Pythagorian Triplate";
    }
    else
    {
        cout << "Not Pythagorian Triplate";
    }
    return 0;
}