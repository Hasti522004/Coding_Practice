#include <iostream>
using namespace std;
int DecimaltoBinary(int n)
{
    int binary_num = 0;
    int position = 1;
    while (n > 0)
    {
        int reminder = n % 2;
        n = n / 2;

        binary_num = binary_num + (reminder * position);
        position = position * 10;
    }

    return binary_num;
}
int DecimaltoOctal(int n)
{
    int num = 0;
    int position = 1;
    while (n > 0)
    {
        int reminder = n % 8;
        n /= 8;

        num += (reminder * position);
        position *= 10;
    }

    return num;
}
string reverse(string n){
    int len = n.size();
    for(int i=0;i<len/2;i++){
        swap(n[i],n[len-i-1]);
    }
    return n;
}
string DecimaltoHexaDecimal(int n)
{
    string num = "";
    int position = 1;
    while (n > 0)
    {
        int reminder = n % 16;
        n /= 16;

        if(reminder<=9){
            num += to_string(reminder);
        }
        else{
            char c = 'A' + reminder - 10;
            num += c;
        }
    }
    
    return reverse(num);
}
int main()
{
    int n;
    cin >> n;
    // cout << DecimaltoBinary(n)<<endl;
    // cout << DecimaltoOctal(n)<<endl;
    cout<< DecimaltoHexaDecimal(n)<<endl;
    return 0;
}