#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s = "23298392389";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
    return 0;
}