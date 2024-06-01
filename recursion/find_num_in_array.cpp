#include <iostream>
using namespace std;
int findNum(int arr[],int n,int key,int i)
{
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return findNum(arr,n,key,i+1);
}
int findLastNum(int arr[],int n,int key,int i)
{
    if(i==n){
        return -1;
    }
    int restarray = findLastNum(arr,n,key,i+1);
    if(restarray != -1){
        return restarray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}
int main()
{
    int arr[5] = {1,2,3,4,2};
    cout<<findNum(arr,5,2,0)<<" "<<findLastNum(arr,5,2,0);
    return 0;
}