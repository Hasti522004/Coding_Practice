#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    bool flag=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-i-1]){
            continue;
        }else{
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Palindrome";
    }else{
         cout<<"Not Palindrome";
    }
    return 0;
}