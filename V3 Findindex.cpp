// Given a array and element perform linear search
// Return index of element if found

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>arr, int target, int index)
{
    if(index == arr.size()-1) return -1;
    if(arr[index] == target) return index;
    else return search(arr, target, index+1);
}

int main()
{
    vector<int>arr = {1,2,3};
    int index = search(arr, 2, 0);

    cout<<index<<endl;

    return 0;
}
