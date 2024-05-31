#include <bits/stdc++.h>
using namespace std;
int maxsum(int arr[], int i,int j){
    int sum = 0;
    for(int k=i;k<=j;k++){
        sum+=arr[k];
    }
    return sum;
}

//time complexity -> O(n^3)
int usingBruteForceApproach(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int m = maxsum(arr,i,j);
            if(m > max){
                max = m;
            }
        }
    }
    return max;
}

//time complexity -> O(n^2)
int usingCumulativeSum(int arr[],int n){
    int carr[n+1];
    carr[0] = 0;
    for(int i=1;i<=n;i++){
        carr[i] = carr[i-1] + arr[i-1];
    }
    int max_sum = INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            int sum = carr[i]-carr[j];
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
}

//Kadane's Approach
//time complexity -> O(n)
void usingKadaneAlgo(int arr[],int n){
    int currentsum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        currentsum += arr[i];
        if(currentsum<0){
            currentsum = 0;
        }
        max_sum = max(max_sum,currentsum);
        cout<<"max : "<<max_sum<<"Current : "<<currentsum<<endl;
    }
    cout<<"Max " <<max_sum;
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
    // cout<<usingBruteForceApproach(array,n);
    // cout<<usingKadaneAlgo(array,n);
    usingKadaneAlgo(array,n);
    return 0;
}

