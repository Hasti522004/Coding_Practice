#include<iostream>
using namespace std;
int main(){
    int n = 7;
    for(int i=0;i<n;i++){
        if(i==n-1){
            for(int j=0;j<(2*n-1);j++){
                cout<<"*";
            }
        }
        else{
            for(int j=n-i-1;j>0;j--){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0;j<2*i;j++){
                if(j==((2*i)-1)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}