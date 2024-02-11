#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int>nums, int index)
{
    if(index == nums.size()-1) return true;
    if ((nums[index] < nums[index+1]) && checkSorted(nums,index+1)) return true;
    return false;
}

int main()
{
    vector<int>a = {1,2,3,4,5,6,7,8,9};
    // int index = 0;
    if(checkSorted(a,0) == 0) cout <<"False"<<endl;
    else cout<<"True"<<endl;
    return 0;
}
