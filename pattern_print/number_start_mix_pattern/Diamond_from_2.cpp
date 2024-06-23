#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 2;
    int i=0;
    while(count<=4){
        for(int j=0;j<i+1;j++){
            if(j==i){
                cout<<count;
            }else{
                cout<<count<<"*";
            }
        }
        cout<<endl;
        i++;
        count++;
    }
    count-=1;
    i=0;
    while(count>=2){
        for(int j=n-i-1;j>0;j--){
            if(j==1){
                cout<<count;
            }
            else{
                cout<<count<<"*";
            }
        }
        count--;
        cout<<endl;
        i++;
    }
    return 0;
}