// Sum of N to 1;

#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n == 0) return n;
    return n + sum(n-1); //Recurrance Relation
}


int main()
{
    cout << sum(5) <<endl;
    return 0;
}