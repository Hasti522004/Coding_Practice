#include<bits/stdc++.h>
using namespace std;
bool pairSum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
bool pairSum2(int arr[],int n,int k){
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    while( high>low){
        int temp = arr[low]+arr[high];
        if(temp==k){
            cout<<low<<" "<<high;
            return true;
            
        }else if(temp > k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pairSum2(arr,n,k);
    return 0;
}