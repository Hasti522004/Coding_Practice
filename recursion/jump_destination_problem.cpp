#include<iostream>
using namespace std;
// int minnum(int a,int b){
//     return (a<b)?a:b;
// }
// int absnum(int a){
//     return (a<0)?(-a):a;
// }
// int dest(int des,int s,int jump){
//     if(jump==0){
//         return des;
//     }
//     int t = minnum(absnum(dest(des+s,s,jump-1))-0,absnum(dest(des-s,s,jump-1))-0);
//     return t;
// }

int dest(int des,int s,int jump){
    if(jump==0){
        return des;
    }
    int move_right = dest(des+s,s,jump-1);
    int move_left = dest(des-s,s,jump-1);

    int abs_right = (move_right<0)?-move_right:move_right;
    int abs_left = (move_left<0)?-move_left:move_left;

    return (abs_right<abs_left)?abs_right:abs_left;
}
int main(){
    cout<<dest(0,2,5);
}