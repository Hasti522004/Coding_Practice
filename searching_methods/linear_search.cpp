#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(array[i]==key){
            cout<<i;
            flag=1;
            break;
        }
    }
    if(!flag){
        cout<<"Key is not Found";
    }
    return 0;
}