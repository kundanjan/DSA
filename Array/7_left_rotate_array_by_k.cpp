#include<iostream>
#include<algorithm>

using namespace std;

// brute force = > store first k elements shift and append the first k elements to the end


void left_rotate_by_k(int *arr,int n,int k)
{
    k = k % n;
    
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    for(int i = 0 ; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    left_rotate_by_k(arr,n,2);
    
    for(int i = 0 ; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}