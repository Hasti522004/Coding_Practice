#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string tolowercase(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }
    }
    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int arr[256] = {0};
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    s1 = tolowercase(s1);
    s2 = tolowercase(s2);
    bool flag = true;
    cout<<s1<<" "<<s2;
    if (s1.length() == s2.length()){
        for (int i = 0; i < s1.length(); i++){
            arr[s1[i]]++;
        }
        for (int i = 0; i < s2.length(); i++){
            arr[s2[i]]--;
        }
        for(int i=0;i<256;i++){
            if(arr[i] != 0){
                flag = false;
                break;
            }
        }
    }
    else{
       flag = false;
    }
    if(flag){
        cout<<endl<<"string is Anagram";
    }
    else{
        cout<<endl<<"string is not Anagram";
    }
    return 0;
}