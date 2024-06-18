#include<iostream>
using namespace std;
string numtoword(int num){
        if(num == 0){
            return "Zero";
        }
        string result;
        if(num >= 1000000000){
            result += numtoword(num/1000000000) + "Billion ";
            num %= 1000000000;
        }
        if(num >= 1000000){
            result += numtoword(num/1000000) + "Million ";
            num %= 1000000;
        }
        if(num >= 1000){
            result += numtoword(num/1000) + "Thousand ";
            num %= 1000;
        }
        if(num >= 100){
            result += numtoword(num/100) + "Hundard ";
            num %= 100;
        }
        if(num >= 20){
            string tens[] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
            result += tens[num/10];
            num %= 10;
        }
        if(num>=10){
            string teens[] = {"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
            result += teens[num - 10];
            return result;
        }
        if(num>0){
            string units[] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
            result += units[num];
        }
        return result;
}
int main(){
    cout<<numtoword(1234500);
    return 0;
}