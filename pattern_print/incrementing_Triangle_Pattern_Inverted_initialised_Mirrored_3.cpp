#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 2;
    for(int i=0;i<n;i++){
        count += (2*i)+1;
        for(int j=0;j<i+1;j++){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    return 0;
}