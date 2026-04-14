#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> intersection(vector<int>& arr1,vector<int>& arr2)
{
    unordered_set<int> set1(arr1.begin(),arr1.end());
    unordered_set<int> result;

    for(int x : arr2)
    {
        if(set1.count(x))
            result.insert(x);
    }

    return vector<int>(result.begin(),result.end());

}


int main()
{
    vector<int> a = {4,5,62,1,2};
    vector<int> b = {6,3,8,3,1,4};

    vector<int> res = intersection(a,b);

    for(int x: res)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}