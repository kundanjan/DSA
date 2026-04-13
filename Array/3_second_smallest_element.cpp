#include<iostream>

using namespace std;


//brute force -> sort the array and return arr[1]


int second_smallest(int* arr, int N)
{
    // optimal solution
    int min = arr[0];
    for(int i = 1;i < N;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    int sec_min = arr[0];

    for(int i = 1;i < N;i++)
    {
        if(arr[i] < sec_min && arr[i] > min)
        {
            sec_min = arr[i];
        }
    }

    return sec_min;

}

int main()
{
    int arr[] = {12,43,12,5,6,71,41};
    int N = 7;

    cout<<"Second smallest in Array : "<< second_smallest(arr,N)<<endl;

    return 0;
}