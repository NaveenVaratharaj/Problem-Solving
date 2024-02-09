// Check whether the number is palindrome
// Find Reverse of a num and compare
#include <bits/stdc++.h>
using namespace std;


int sum = 0;

void rev(int n)
{
    if(n == 0) return;

    int rem = n % 10;
    sum = sum * 10 + rem;
    rev(n/10);

}

int main()
{
    rev(112);
    int reversed = sum;
    if(reversed == 211) cout<<"true";
    else cout<<"false";

    return 0;
}
