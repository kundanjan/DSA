#include<iostream>

using namespace std;


//brute force -> sort the array and return arr[n-1]


int largest(int* arr, int N)
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
    return max;

}

int main()
{
    int arr[] = {12,43,12,5,6,71,41};
    int N = 7;

    cout<<"Largest in Array : "<< largest(arr,N)<<endl;

    return 0;
}