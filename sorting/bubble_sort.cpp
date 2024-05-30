#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
   
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
//the adjacent elements if they are in the wrong order.
