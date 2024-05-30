#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    int ans = binarySearch(array,n,key);
    if(ans==-1){
        cout<<"key is not found";
    }
    else{
        cout<<"Key Found at Position "<<ans;
    }
    return 0;
}