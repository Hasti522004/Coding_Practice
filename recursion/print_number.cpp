#include <iostream>
using namespace std;
void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout<<n<<" "; //decrease
    printNum(n-1);
    cout<<n<<" "; //increase
}
int main()
{
    printNum(5);
}