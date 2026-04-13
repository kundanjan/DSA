#include<iostream>
#include<algorithm>

using namespace std;

// brute force => take temp , insert all non zeros from arr in temp put back them from 0 to temp.size in og array then fill remaining with zero i.e from temp.size + 1 to n-1 -> time complexity = O(2N) = O(N)

void move_zeros_to_end(int *arr, int n)
{
    int j = 0;

    for(int i = 0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {2,5,0,7,5,0,0,7,3,2};
    int n = 10;

    move_zeros_to_end(arr,n);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}