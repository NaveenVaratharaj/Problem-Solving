// Product of digits using Recursion

#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n%10 == n) return n;
    return n % 10 * sum(n/10);
}

int main()
{
    cout<<sum(505);
    return 0;
}
