#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==i){
                cout<<count;
            }else{
                cout<<count<<"*";
            }
        }
        cout<<endl;
        count++;
    }
    count--;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            if(j==1){
                cout<<count;
            }
            else{
                cout<<count<<"*";
            }
        }
        count--;
        cout<<endl;
    }
    return 0;
}