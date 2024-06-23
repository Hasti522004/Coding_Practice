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
            count++;
        }
        cout<<endl;
    }
    cout<<endl;
    count = (n*(n+1))/2;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            if(j==1){
                cout<<count;
            }else{
                cout<<count<<"*";
            }
            count--;
        }
        cout<<endl;
    }
    cout<<endl;
    count = 1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
            if(j==i){
                cout<<count;
            }else{
                cout<<count<<"*";
            }
            count--;
        }
        count += (2*(i+1))+1;
        cout<<endl;
    }
    cout<<endl;
    count = (n*(n+1))/2 - n + 1;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            if(j==1){
                cout<<count;
            }else{
                cout<<count<<"*";
            }
            count++;
        }
        count -= 2*(n-i)-1;
        cout<<endl;
    }
    return 0;
}