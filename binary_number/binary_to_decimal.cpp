#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int num = 0;
    int i=0;
    while(n>0){
        int reminder = n%10;
        num = num + (reminder*(pow(2,i)));
        i++;
        n=n/10;
    }
    return num;
}

int octalToDecimal(int n){
    int num = 0;
    int i=0;
    while(n>0){
        int reminder = n%10;
        num = num + (reminder*(pow(8,i)));
        i++;
        n=n/10;
    }
    return num;
}

int hexaDecimalToDecimal(string n){
    int num = 0;
    int x = 1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]<='9' && n[i]>='0'){
            num += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            num += x*((n[i] - 'A') + 10);
        }
        x = x*16;
    }
    return num;
}

using namespace std;
int main(){
    // int n;
    // cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    string n;
    cin>>n;
    cout<<hexaDecimalToDecimal(n);

    return 0;
}