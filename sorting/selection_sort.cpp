#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(array[i]>array[j]){
    //             swap(array[i],array[j]);
    //         }
    //     }
    // }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j] < array[i]){
                array[i] = (array[i]*array[j])/(array[j] = array[i]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

//minimum element moves to the first in the array

//Selection sort is a simple and efficient sorting algorithm that works by repeatedly
//selecting the smallest (or largest) element from the unsorted portion of the list and
//moving it to the sorted portion of the list.
