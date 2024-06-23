#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            cout<<"333";
        }else{
            cout<<"3"<<i<<"3";
        }
        cout<<endl;
    }
    return 0;
}