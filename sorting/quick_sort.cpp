#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r){
    int i = l - 1;
    int pivot = arr[r];
    for(int j=l;j<r-1;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[r];
    arr[r] = temp;
    return i;
}

void quicksort(int arr[],int l,int r){
    if(l<r){
        int pidx = partition(arr,l,r);
        quicksort(arr,l,pidx-1);
        quicksort(arr,pidx+1,r);
    }
}

int main(){
    int n = 7;
    int arr[7] = {4,2,6,7,1,8,3};
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}