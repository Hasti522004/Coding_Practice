#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for(int i=2 ;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// input : 5
// output :
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1