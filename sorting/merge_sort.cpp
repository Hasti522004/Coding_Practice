#include <bits/stdc++.h>
using namespace std;

void conquer(int arr[], int l, int mid, int r)
{
    int merge[r - l + 1];
    int i = l;
    int j = mid + 1;
    int x = 0;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            merge[x++] = arr[i++];
        }
        else
        {
            merge[x++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        merge[x++] = arr[i++];
    }
    while (j <= r)
    {
        merge[x++] = arr[j++];
    }
    int n = sizeof(merge) / sizeof(merge[0]);
    for (int i = 0, j = l; i < n; i++, j++)
    {
        arr[j] = merge[i];
    }
}

void divide(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    divide(arr, l, mid);
    divide(arr, mid + 1, r);
    conquer(arr, l, mid, r);
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printarr(arr, n);

    divide(arr, 0, n - 1);
    printarr(arr, n);

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// void conquer(int arr[],int l,int mid,int r){
//     int merge[r-l+1];
//     int i= l;
//     int j = mid + 1;
//     int x = 0;
//     while(i<=mid && j<=r){
//         if(arr[i]<arr[j]){
//             merge[x++] = arr[i++];
//         }else{
//             merge[x++] = arr[j++];
//         }
//     }
//     while(i<=mid){
//         merge[x++] = arr[i++];
//     }
//     while (j<=r){
//         merge[x++] = arr[j++];
//     }
//     for(int i=0;i<(r-l+1);i++){
//         arr[l+i] = merge[i];
//     }
// }

// void divide(int arr[],int l,int r){
//     if(l>=r){
//         return;
//     }
//     int mid = l + (r-l)/2;
//     divide(arr,l,mid);
//     divide(arr,mid+1,r);
//     conquer(arr,l,mid,r);
// }

// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     divide(arr,0,n-1);
//     printarr(arr,n);

//     return 0;
// }