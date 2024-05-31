#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int i,int j){
    for(int k=i;k<=j;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            print(array,i,j);
        }
    }
    return 0;
}

//subarray = n*(n+1)/2

//subsequence = 2^n