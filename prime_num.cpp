#include<iostream>
using namespace std;
int main(){
    int num = 99;
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count){
        cout<<"Not a Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}