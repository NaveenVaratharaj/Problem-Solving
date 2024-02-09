#include <bits/stdc++.h>
using namespace std;

int globalCount = 0; // Rename the global variable to avoid conflicts

void countZeros(int n)
{
    if(n == 0) return;
    if(n % 10 == 0) ++globalCount;
    countZeros(n/10);
}

int main()
{
    countZeros(00000);
    cout<<globalCount;
    return 0;
}
