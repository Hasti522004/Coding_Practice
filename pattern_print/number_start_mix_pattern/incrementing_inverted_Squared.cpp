#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = (4*n)-3;
    bool flag=0;
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=0;j<(2*n-1);j++){
            if(flag){
                cout<<count;
                count++;
                flag=0;
            }
            else{
                cout<<"*";
                flag=1;
            }
        }
        count -= (2*n);
        cout<<endl;
    }
    return 0;
}