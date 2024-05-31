#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    vector<int> v;
    for (int i = n - k; i < n; i++)
    {
        v.push_back(array[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        v.push_back(array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

// void rotate(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     k = k % n;
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(), nums.begin() + k);
//     reverse(nums.begin() + k, nums.end());
// }