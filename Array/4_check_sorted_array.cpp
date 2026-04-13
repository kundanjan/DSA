#include<iostream>

using namespace std;

// brute force -> check each element with its future occuring like 0th will be compared with all future i.e from 1 to n then 1th will from 2 to n etc...

bool isSorted(int *arr, int n)
{
    // optimal approach
    for(int i = 0;i<n-2;i++)
    {
        if(arr[i] > arr[i+1]){
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {12,43,12,5,6,71,41};
    int arr1[] = {1,2,3,4,5,6,7};
    int N = 7;

    cout<<isSorted(arr,N)<<endl;
    cout<<isSorted(arr1,N)<<endl;

    return 0;
}