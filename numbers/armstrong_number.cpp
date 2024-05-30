#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int sum = 0;
    int num = n;
    while(n>0){
        int digit = n%10;
        sum += (digit*digit*digit);
        n = n/10;
    }
    if(sum == num){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)){
        cout<<n<<" is Armstrong";
    }else{
        cout<<n<<" is not Armstrong";
    }

    return 0;
}