#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = (n*(n+1))/2;
    cout<<count;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    return 0;
}