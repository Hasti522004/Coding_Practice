#include <bits/stdc++.h>
using namespace std;

void nonlinearTime(int array[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
            current += array[j];
            if (current == s)
            {
                cout << i + 1 << " " << j + 1;
            }
        }
        cout << endl;
    }
}

void linearTime(int array[], int n, int s)
{
    int st = 0, end = 0, current = 0, i = 0, j = 0;
    while (j < n && array[j] + current <= s)
    {
        current += array[j];
        j++;
    }
    if (current == s)
    {
        cout << i+1 << " " << j;
    }
    else{
        while(j<n){
            current += array[j];
            while(current > s){
                current -= array[i];
                i++;
            }
            if(current == s){
                st = i+1;
                end = j+1;
                break;
            }
            j++;
        }
        cout<<st<<" "<<end;
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    nonlinearTime(array, n, s);
    linearTime(array, n, s);
    return 0;
}
