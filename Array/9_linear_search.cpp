#include<iostream>

using namespace std;

int linear_search(int *arr, int n,int key)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {13,25,42,17,58,18,68,78,51,63};
    int n = 10;

    cout<<"Find 58 : Index : "<<linear_search(arr,n,58)<<"\n"; // 4
    cout<<"Find 63 : Index : "<<linear_search(arr,n,63)<<"\n"; // 9
    cout<<"Find 123 : Index : "<<linear_search(arr,n,123)<<"\n"; // not found case will return -1

    return 0;
}