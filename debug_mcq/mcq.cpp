// C++ program to demonstrate the working of friend function
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Distance {
    private:
        int meter = 9;
        
        friend int addFive(Distance);
        
};

// friend function definition
int addFive(Distance d) {

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main() {
    vector<string> v;
    v.insert(v.begin() + 0,"20");
    v.push_back("Hasti");
   
    for(auto a : v){
        cout<<a;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}