#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    bool flag=1;
    for(int i=0;i<(2*n-1);i++){
        if(flag){
            cout<<count;
            count++;
            flag=0;
        }else{
            cout<<"*";
            flag=1;
        }
    }
    cout<<endl;
    count = count * 2 - 1;
    for(int i=0;i<n-2;i++){
        flag=1;
        for(int j=0;j<(2*n-1);j++){
            if(flag){
                cout<<count;
                count++;
                flag=0;
            }else{
                cout<<"*";
                flag=1;
            }
        }
        cout<<endl;
    }
    count = n+1;
    flag=1;
    for(int i=0;i<(2*n-1);i++){
        if(flag){
            cout<<count;
            count++;
            flag = 0;
        }else{
            cout<<"*";
            flag=1;
        }
    }
    return 0;
}