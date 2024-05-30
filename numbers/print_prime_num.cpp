#include<iostream>
using namespace std;
int isPrime(int num){
    if(num<=1){
        return false;
    }
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=20;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}