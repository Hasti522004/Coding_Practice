#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int arr[],int n){
    int current = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        current += arr[i];
        if(current<0){
            current = 0;
        }
        max_sum = max(max_sum,current);
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
    int wrapsum = 0;
    int nonwrapsum = kadaneAlgo(arr,n);
    int totalsum;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadaneAlgo(arr,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}