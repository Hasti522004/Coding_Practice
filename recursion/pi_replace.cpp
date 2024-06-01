#include <iostream>
using namespace std;
void replace(string n)
{
    if(n.length() == 0){
        return;
    }
    if(n[0]=='p' && n[1]=='i'){
        cout<<"3.14";
        replace(n.substr(2));
    }else{
        cout<<n[0];
        replace(n.substr(1));
    }
    
}
int main()
{
    replace("piiiippisaaipsapi");
}