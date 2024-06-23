#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 1;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            flag = 1;
        }else{
            flag = 0;
        }
        for(int j=0;j<i+1;j++){
           
            if(flag){
                cout<<"1 ";
                flag = 0;
            }else{
                cout<<"* ";
                flag = 1;
            }
        }
        cout<<endl;
    }
    return 0;
}