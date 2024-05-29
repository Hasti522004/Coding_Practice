#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int binary_num = 0;
    int position = 0;
    while (n > 0)
    {
        int reminder = n % 2;
        n = n / 2;
        if (position == 0)
        {
            position = 1;
            binary_num = reminder;
        }
        else
        {
            position = position * 10;
            binary_num = binary_num + (reminder * position);
        }
    }

    cout << binary_num;
    return 0;
}