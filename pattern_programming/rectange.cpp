#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==0 || j==c-1 || i==0 || r-1==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}