#include <bits/stdc++.h>
using namespace std;

vector<int> unionSortedArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]) {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
        else {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Remaining elements of a[]
    while (i < a.size()) {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    // Remaining elements of b[]
    while (j < b.size()) {
        if (ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5, 6};

    vector<int> result = unionSortedArrays(a, b);

    cout << "Union: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}