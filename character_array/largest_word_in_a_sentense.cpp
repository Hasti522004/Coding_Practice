#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int max_len = INT_MIN;
    int word_len = 0, i = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        cout<<arr[i]<<endl;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (word_len > max_len)
            {
                max_len = word_len;

                maxst = st;
            }
            word_len = 0;
            st = i + 1;
        }
        else
        {
            word_len++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    for (int i = 0; i <= (max_len); i++)
    {
        cout << arr[i + maxst];
    }
    cout << max_len;
    return 0;
}