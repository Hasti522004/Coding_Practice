
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    // Ensure both strings are the same length by padding with leading zeros
    int maxLength = max(a.length(), b.length());
    while (a.length() < maxLength) a = '0' + a;
    while (b.length() < maxLength) b = '0' + b;
    
    string result = "";
    int carry = 0;
    
    // Start from the end of both strings
    for (int i = maxLength - 1; i >= 0; --i) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        
        int sum = bitA + bitB + carry;
        carry = sum / 2;
        result = to_string(sum % 2) + result;
    }
    
    // If there's a carry left, add it to the result
    if (carry) {
        result = '1' + result;
    }
    
    return result;
}

int main() {
    string n1, n2;
    cout << "Enter two binary numbers: ";
    cin >> n1 >> n2;
    cout << "Sum: " << addBinary(n1, n2) << endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int reverse(int n){
//     int ans = 0;
//     while(n>0){
//         int lastDigit = n%10;
//         ans = ans*10 + lastDigit;
//         n /= 10;
//     }
//     return ans;
// }
// int AddBinaryNum(int a,int b){
//     int num = 0;
//     int carry = 0;
//     while(a>0 && b>0){
//         if(a%2==0 && b%2==0){
//             num = num*10 + carry;
//             carry = 0;
//         }else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
//             if(carry == 1){
//                 num = num*10 + 0;
//                 carry = 1;
//             }
//             else{
//                 num = num*10 + 1;
//                 carry = 0;
//             }
//         }else{
//             num = num*10 + carry;
//             carry = 1;
//         }
//         a /= 10;
//         b /= 10;
//     }
//     while(a>0){
//         if(carry==1){
//             if(a%2==0){
//                 num = num*10 + carry;
//                 carry =0;
//             }else{
//                 num = num*10 + 0;
//                 carry = 1;
//             }
//         }else{
//             num = num*10 + (a%2);
//             carry =0;
//         }
//         a /= 10;
//     }
//      while(b>0){
//         if(carry==1){
//             if(b%2==0){
//                 num = num*10 + carry;
//                 carry =0;
//             }else{
//                 num = num*10 + 0;
//                 carry = 1;
//             }
//         }else{
//             num = num*10 + (b%2);
//             carry =0;
//         }
//         b /= 10;
//     }
//     if(carry == 1){
//         num = num*10 + 1;
//     }
//     num = reverse(num);
//     return num;
// }


// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<AddBinaryNum(n1,n2);
//     return 0;
// }