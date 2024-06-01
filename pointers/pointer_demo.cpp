#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    // int a = 10;
    // int *ptr;
    // ptr = &a;
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // ptr++;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    

    int arr[3] = {10,20,30};
    int *pt = arr;
    for(int i=0;i<3;i++){
        cout<<*pt<<endl;
        cout<<*(arr+i)<<endl;
        pt++;
    }

    int a=2;
    int b=4;
    swap(&a,&b);  //call by reference
    cout<<a<<" "<<b;

    return 0;
}