#include<iostream> 

using namespace std;

// brute force -> using set for unique elements but -> results in O(n log n) time complexity as inserting element in set require O(log n)

int remove_dup(int *arr, int n )
{
    // optimal approach with O(N)
    int i = 0;
    
    for(int j = 1;j<n;j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main()
{
    int arr[] = {1,1,1,2,3,3,4,4,4,6};
    int n = 10;

    for(int i = 0 ; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int new_n = remove_dup(arr,n);
    for(int i = 0 ; i< new_n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}