#include<iostream>
#include<vector>

using namespace std;

vector<int> intersection(vector<int>& arr1,vector<int>& arr2)
{
    vector<int> result;
    int i = 0,j = 0;

    while(i<arr1.size() && j < arr2.size())
    {
        if(arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return result;

}


int main()
{
    vector<int> a = {2,2,3,4,5,6,6,7,7,8};
    vector<int> b = {1,2,3,5,5,6,7,7,8};

    vector<int> res = intersection(a,b);

    for(int x: res)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}