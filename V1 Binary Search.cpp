#include <bits/stdc++.h>
using namespace std;

// Binary Search recursion : Divide and Conquer rule this

int binSearch(vector<int>arr, int t, int s, int e)
{
    if(s > e) return -1;

    int m = (s+e) / 2;

    if(arr[m] == t) return m;

    if(arr[m] > t)
    {
        return binSearch(arr,t,s,m-1);
    }

    else if(arr[m] < t)
    {
        return binSearch(arr,t,m+1,e);
    }
}


int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8,9,100};
    int s = 0;
    int e = arr.size()-1;

    cout<<binSearch(arr, 67, s, e);

    return 0;
}
