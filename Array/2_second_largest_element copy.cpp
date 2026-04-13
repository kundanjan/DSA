#include<iostream>

using namespace std;


//brute force -> sort the array and return arr[n-2]


int second_largest(int* arr, int N)
{
    // optimal solution
    int max = arr[0];
    for(int i = 1;i < N;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int sec_max = arr[0];

    for(int i = 1;i < N;i++)
    {
        if(arr[i] > sec_max && arr[i] < max)
        {
            sec_max = arr[i];
        }
    }

    return sec_max;

}

int main()
{
    int arr[] = {12,43,12,5,6,71,41};
    int N = 7;

    cout<<"Second Largest in Array : "<< second_largest(arr,N)<<endl;

    return 0;
}