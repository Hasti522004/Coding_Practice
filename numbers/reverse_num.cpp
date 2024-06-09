#include<iostream>
using namespace std;
void numrev(int num){
    if(num==0){
        return;
    }
    int rem = num % 10;
    cout<<rem;
    numrev(num/10);
}
int main(){
    int n;
    cin>>n;
    numrev(n);
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    // cout<<reverse<<endl;
 
    return 0;
}


