#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=1;
    for(int i=0;i<n+1;i++){
        if(i<=(n/2) && i!=0){
            count += n;
        }
        if(i>(n/2)){
            count -= (n*(i-1));
        }
        for(int j=0;j<n;j++){
            if(j==n-1){
                cout<<count;
                count++;
            }else{
                cout<<count<<"*";
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}