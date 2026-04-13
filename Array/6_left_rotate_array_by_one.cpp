#include<iostream>

using namespace std;

// another approach of solving this is using swaping the first element all the way to end.(same time complexity but is not efficient at low level performs 3(n-1) assignments)

void left_rotate_by_one(int *arr,int n)
{
    int temp = arr[0];

    for(int i = 1; i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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

    left_rotate_by_one(arr,n);
    
    for(int i = 0 ; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}