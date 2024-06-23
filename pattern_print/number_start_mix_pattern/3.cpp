// 1*2*3*4
// 9*10*11*12
// 5*6*7*8
// 13*14*15*16

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count1 = 1;
    int count2 = (n/2)*n + 1;
    int flag1 = 1;
    int flag2 = 0;
    for(int i=0;i<n;i++){
        flag2=1;
        if(flag1){
            for(int j=0;j<(2*n-1);j++){
                if(flag2){
                    cout<<count1;
                    count1++;
                    flag2=0;
                }else{
                    cout<<"*";
                    flag2=1;
                }
            }
        }else{
            for(int j=0;j<(2*n-1);j++){
                if(flag2){
                    cout<<count2;
                    count2++;
                    flag2=0;
                }else{
                    cout<<"*";
                    flag2=1;
                }
            }
        }
        flag1 = !flag1;
        cout<<endl;
    }
    return 0;
}