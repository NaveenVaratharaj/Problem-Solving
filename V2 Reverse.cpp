// Reverse a Number

#include <bits/stdc++.h>
using namespace std;

int sum = 0;

void rev1(int n)
{
    if(n == 0) return;
    int rem = n % 10;
    sum = sum * 10 + rem;
    rev1(n/10);
}

int main()
{
    rev1(1234); 
    cout<<sum;
    return 0;
}
