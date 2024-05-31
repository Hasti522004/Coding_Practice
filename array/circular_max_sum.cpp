#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int arr[],int n){
    int max_sum = INT_MIN;
    int currsum = 0;
    for(int i=0;i<n;i++){
        currsum += arr[i];
        if(currsum<0){
            currsum = 0;
        }
        max_sum = max(max_sum,currsum);
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kadaneAlgo(arr,n);
    return 0;
}