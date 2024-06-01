#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s = "Hasti Hajiparaddddddddd";
    
    int arr[26] = {0};

    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(char c : s){
        if(isalpha(c)){
            arr[c-'a']++;
        }
    }

    // for(int i=0;i<s.size();i++){
    //     if(s[i]>='a' && s[i]<='z'){
    //         arr[s[i]-'a']++;
    //     }
    // }

    int maxFreq = INT_MIN;
    char c;
    for(int i=0;i<26;i++){
        if(maxFreq < arr[i]){
            maxFreq = arr[i];
            c = i + 'a';
        }
    }

    cout<<"Max charcter is "<<c<<" Repeating "<<maxFreq<<" times";
    return 0;
}