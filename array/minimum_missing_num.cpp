#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N = 1e6 + 2;
    bool a[N];
    for(int i=0;i<N;i++){
        a[i] = false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            a[arr[i]] = true;
        }
    }
    for(int i=0;i<N;i++){
        if(a[i]==false){
            cout<<i;
            break;
        }
    }
    return 0;
}

// 7
// 0 -9 1 2 3 -4 5

// output : 4