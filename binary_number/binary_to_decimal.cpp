#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 0;
    int i=0;
    while(n>0){
        int reminder = n%10;
        num = num + (reminder*(pow(2,i)));
        i++;
        n=n/10;
    }
    cout<<num;
    return 0;
}