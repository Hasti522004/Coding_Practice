#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9] = {3,0,4,0,7,3,1,3,9};
    int n = 9;
    // Method - 1
    // for(int i=0;i<9;i++){
    //     if(arr[i]==0){
    //         int j = i;
    //         while(arr[j-1]!=0 && j>0){
    //             swap(arr[j],arr[j-1]);
    //             j--;
    //         }
    //     }
    // }

    //Method - 2
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
    int a[n] = {0};
    int j = count;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            a[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}