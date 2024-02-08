// Print From N to 1

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n == 0) return; //base condition
    cout<<n<<" ";
    print(n-1); //Recursive call
}

int main()
{
    print(5);
    return 0;
}
