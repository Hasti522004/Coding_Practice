#include<iostream>
using namespace std;
int main(){
    const int m = 3;
    const int n = 3;
    int arr1[] = {1,2,3};
    int arr2[] = {2,5,6};
    int mergeArr[m+n] = {};
    int p,q=0;
    for(int i=0;i<n+m;i++){
        if(arr1[p]<=arr2[q]){
            mergeArr[i] = arr1[p];
            p++;
        }else{
            mergeArr[i] = arr2[q];
            q++;
        }
    }

    return 0;
}