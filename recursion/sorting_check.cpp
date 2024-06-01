#include <iostream>
using namespace std;
bool checksort(int arr[],int n)
{
    if (n==1)
    {
        return true;
    }
    bool restArray = checksort(arr+1,n-1);
    return arr[0]<arr[1] && restArray;
}
int main()
{
    int arr[5] = {1,2,5,10,8};
    cout << checksort(arr,5);
}