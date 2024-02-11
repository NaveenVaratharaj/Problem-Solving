// Given a array and element perform linear search
// Return last index of element if found


// Start from the last index , if found return the index value;
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>arr, int index, int target)
{
    if(index == 0) return -1;
    else if(arr[index] == target) return index;
    return search(arr, index-1, target);
}

int main()
{
    vector<int>arr = {2,2,2};
    int index = search(arr, arr.size()-1,1);

    cout<<index<<endl;

    return 0;
}
