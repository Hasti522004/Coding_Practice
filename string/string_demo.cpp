#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hasti Hajipara";
    string nstr(5,'n');
    cout<<nstr;
    getline(cin,str);
    cout<<str;
    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl;
    
    s1.clear();
    if(s1.empty()){
        cout<<"string is Empty"<<endl;
    }
    s1.append(s2);
    cout<<s1;

    string s1 = "HastiHajipara";
    cout<<s1.find("ti")<<endl;
    s1.insert(2,"lol");
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.substr(6,10);
    s1.erase(3,2);
    cout<<s1;

    int s1 = 12;
    cout<<to_string(s1)+"8";

    string s1 = "askakdhfuilhsdufywe";
    sort(s1.begin(),s1.end());
    cout<<s1;
    return 0;
}