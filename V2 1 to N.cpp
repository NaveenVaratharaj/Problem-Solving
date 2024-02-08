// Print from 1 to N

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n == 0) return; //base condition
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    print(5);
    return 0;
}