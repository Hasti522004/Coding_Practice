#include <iostream>
using namespace std;
void reverseString(string n)
{
    if(n.length() == 0){
        return;
    }
    reverseString(n.substr(1));
    cout<<n[0];
}
int main()
{
    reverseString("Hello");
}