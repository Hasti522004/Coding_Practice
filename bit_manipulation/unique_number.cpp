#include<iostream>
using namespace std;
int uniquenum(int arr[],int n){
    int xorsum =0;
    for(int i=0;i<=n;i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int setBit(int n,int pos){
    return( n & (1<<pos)) != 0;
}
void unique2num(int arr[],int n){
    int xorsum =0;
    for(int i=0;i<=n;i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int count = 0;
    while(setbit!=1){
        setbit = xorsum & 1;
        count++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],count-1)){
            newxor = newxor ^ arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
}
int main(){
    int arr[7] = {2,4,6,3,4,6,2};
    cout<<uniquenum(arr,7);
    int arr1[8] = {2,4,6,7,5,4,6,2};
    unique2num(arr1,8);
    return 0;
}