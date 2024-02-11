// Given a array and element perform linear search
// Return found or not found

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>arr, int x, int i)
{
    if(i == arr.size()-1 && arr[i] != x) return false;
    else if(arr[i] == x) return true;
    return search(arr, x, i+1);

    // if (index == arr.length) {
    //         return false;
    //     }
    // return arr[index] == target || find(arr, target, index + 1);
}

int main()
{
    vector<int>arr = {1,2,3};
    bool searchAns = search(arr, 3, 0);

    if(searchAns) cout<<"Found";
    else cout<<"Not Found";

    return 0;
}
