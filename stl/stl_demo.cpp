#include<bits/stdc++.h>
using namespace std;
template <typename T>
T mymax(T x,T y){
    return (x>y)?x : y;
}
int main(){

    cout<<mymax<int>(10,20)<<endl;
    cout<<mymax<char>('a','b')<<endl;

    set<int> s;
    vector<int> v;
    list<int> l;
    map<char,int> m;
    stack<int> st;
    queue<int> q;
    st.push(10);
    st.push(19);
    st.push(13);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);

    for(auto i : s){
        cout<<i<<" ";
    }

    v.push_back(40);
    v.push_back(20);
    v.push_back(25);
    v.push_back(30);
    v.insert(v.end() - 2,60);
    // v.pop_back();
    // sort(v.begin(),v.end(),true);
  
    int a[5]  {1,2,3,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}