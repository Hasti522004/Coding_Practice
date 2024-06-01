#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearbit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int updatebit(int n, int pos, int num)
{
    int mask = ~(1 << pos);
    int clearbit = n & mask;
    return (clearbit | (num << pos));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearbit(5, 2) << endl;
    cout << updatebit(5, 1, 1) << endl;
    return 0;
}