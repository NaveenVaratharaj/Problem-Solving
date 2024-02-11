// Find all indexes of a number where it occurs
// and add them to a list

#include <bits/stdc++.h>
using namespace std;

vector<int>ans;

void findAll(vector<int>arr, int index, int target)
{
    if(index == arr.size()-1) return;
    if(arr[index] == target) ans.push_back(index);
    findAll(arr,index+1, target);
}

int main()
{
    vector<int>arr = {1,1,1,1,1,1,2,2,2,2,2,2};
    findAll(arr,0,3);
    for(auto i:ans) cout<<i<<" ";
}
